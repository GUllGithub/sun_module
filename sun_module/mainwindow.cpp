#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <qdatetime.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initSeialPort();

    ui->sendButton->setEnabled(false);
    ui->disconnectButton->setEnabled(false);
    ui->IPLineEdit->setText("localhost");
    ui->portLineEdit->setText("6666");
    tcpSocket = NULL;//使用前先清空

    blockSize = 0; //初始化其为0

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
//    delete tcpSocket;
    serial.close();
    delete ui;
}

void MainWindow::timerUpdate(void)
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->label_time->setText(str);
}

void MainWindow::sendMassage(){}

void MainWindow::readMassage()
{
//    QByteArray data=tcpSocket->readAll();
//    ui->clearLineEdit->setText(QString(data));

    QDataStream in(tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);
    //设置数据流版本，这里要和服务器端相同
    if(blockSize==0) //如果是刚开始接收数据
    {
       //判断接收的数据是否有两字节，也就是文件的大小信息
       //如果有则保存到blockSize变量中，没有则返回，继续接收数据
       if(tcpSocket->bytesAvailable() < (int)sizeof(quint16)) return;
       in >> blockSize;
    }
    if(tcpSocket->bytesAvailable() < blockSize) return;
    //如果没有得到全部的数据，则返回，继续接收数据
    in >> message;
    //将接收到的数据存放到变量中
    ui->clearLineEdit->setText(message);
    //显示接收到的数据

    if(message.length() == 12)//判断接收数据的长度是否为12个字节
        displayData();          //跳转到显示函数

//    ui->lineEdit_test->setText(QString(message[0]));//用于测试怎样取message中的数据

}

void MainWindow::displayData()
{
    QString data_temp;
    int i;
    double result1;
/****************蓄电池电压取0-3Byte******************/
    for(i=0; i<4; i++)
        data_temp[i]=message[i];
     ui->lineEdit_test->setText(QString(data_temp));
     result1=data_temp.toDouble() ;//data_temp.toInt(0,10);//将data_temp转化成Double类型
     qDebug() <<  result1;              //查看转换之后的数据
     qDebug() <<  data_temp;
     if(result1>50)                      //如果数据大于某个数值，则字体会显示红色
         ui->battery_voltage->setStyleSheet("color: red");
         ui->battery_voltage_2->setText(QString(data_temp));
/****************蓄电池电流取4-7Byte******************/
     for(; i<8; i++)
         data_temp[i-4]=message[i];
      ui->lineEdit_test->setText(QString(data_temp));
     result1=data_temp.toDouble() ;//将data_temp转化成Double类型
      qDebug() <<  result1;              //查看转换之后的数据
      qDebug() <<  data_temp;
      if(result1>50)                      //如果数据大于某个数值，则字体会显示红色
      ui->battery_current->setStyleSheet("color: red");
      ui->battery_current_2->setText(QString(data_temp));
/****************电池板电压取8-11Byte******************/
     for(; i<12; i++)
         data_temp[i-8]=message[i];
  ui->lineEdit_test->setText(QString(data_temp));
   result1=data_temp.toDouble() ;//data_temp.toInt(0,10) ;//将data_temp转化成Double类型
  qDebug() <<  result1;              //查看转换之后的数据
  qDebug() <<  data_temp;
  if(result1>50)                      //如果数据大于某个数值，则字体会显示红色
      ui->panel_voltage->setStyleSheet("color: red");
      ui->panel_voltage_2->setText(QString(data_temp));

}
void MainWindow::displayError(QAbstractSocket::SocketError)
{
    QMessageBox::warning (this, tr("Warnning"), tcpSocket->errorString ());
    tcpSocket->close ();
    ui->connnectButton->setEnabled (true);
    ui->disconnectButton->setEnabled (false);
    ui->sendButton->setEnabled (false);
}

void MainWindow::on_sendButton_clicked()
{
    QString sendmessage;
    sendmessage = ui->sendLineEdit->text();
   if(sendmessage == NULL) return;
    QByteArray block;//暂时存储我们需要发送的数据
    QDataStream out(&block,QIODevice::WriteOnly);//TCP必须和数据流一起使用
    out.setVersion(QDataStream::Qt_4_6);//设置数据流的版本（服务器和主机版本一定相同）
    out << sendmessage;

   tcpSocket->write(block);
 /*     QByteArray data;
    data.append(sendmessage);
    tcpSocket->write(data);*/
    qDebug() <<  block;
}

void MainWindow::on_clearButton_clicked()
{
    ui->clearLineEdit->clear();
}

void MainWindow::on_connnectButton_clicked()
{
    flag = false;
    if(tcpSocket) delete tcpSocket;//如果有指向其他空间直接删除
    tcpSocket = new QTcpSocket(this);//申请堆空间有TCP发送和接受操作

    tcpSocket->abort();//取消已有的连接
    tcpSocket->connectToHost(QHostAddress::LocalHost,6666);//设置客户端的端口号

    tcpIp = ui->IPLineEdit->text();
    tcpPort = ui->portLineEdit->text();
    if(tcpIp==NULL||tcpPort==NULL)//判断IP和PORT是否为空
    {       
        QMessageBox msgBox;
        msgBox.setText("IP or PORT is Empty");
        msgBox.exec();
        return;
    }
    qDebug() << "Debug2";
    tcpSocket->connectToHost(tcpIp,tcpPort.toInt());//连接主机
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),this,
            SLOT(displayError(QAbstractSocket::SocketError)));//错误连接
    connect(tcpSocket,SIGNAL(connected()),this,
            SLOT(connectUpdata()));//更新连接之后按钮的使能
    qDebug() << "Debug3";
    connect(tcpSocket,SIGNAL(readyRead()),this,
            SLOT(readMassage()));//读取信息的连接
    qDebug() << "Debug4";
    ui->connnectButton->setEnabled (false);
    ui->disconnectButton->setEnabled (true);

}

void MainWindow::on_disconnectButton_clicked()
{
    tcpSocket->abort();
    delete tcpSocket;
    tcpSocket=NULL;
    disconnectUpdata();
}

void MainWindow::connectUpdata()
{
    if(!flag)
    {
        QMessageBox msgBox;
        msgBox.setText("TCP connect successful");
        msgBox.exec();
        ui->connnectButton->setEnabled(false);
        ui->sendButton->setEnabled(true);
        ui->disconnectButton->setEnabled(true);
        ui->IPLineEdit->setEnabled(false);
        ui->portLineEdit->setEnabled(false);
    }
    flag=true;

    blockSize = 0; //初始化其为0
}

void MainWindow::disconnectUpdata()
{
    ui->connnectButton->setEnabled(true);
    ui->sendButton->setEnabled(false);
    ui->disconnectButton->setEnabled(false);
    ui->IPLineEdit->setEnabled(true);
    ui->portLineEdit->setEnabled(true);

    ui->battery_voltage->setStyleSheet("color: black");
    ui->battery_current->setStyleSheet("color: black");
    ui->panel_voltage->setStyleSheet("color: black");
    ui->panel_current->setStyleSheet("color: black");
    ui->five_voltage->setStyleSheet("color: black");
    ui->five_current->setStyleSheet("color: black");
    ui->twelve_voltage->setStyleSheet("color: black");
    ui->twelve_current->setStyleSheet("color: black");

    ui->battery_voltage_2->clear();
    ui->battery_current_2->clear();
    ui->panel_voltage_2->clear();
    ui->panel_current_2->clear();
    ui->five_voltage_2->clear();
    ui->five_current_2->clear();
    ui->twelve_voltage_2->clear();
    ui->twelve_current_2->clear();
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QSerialPortInfo info;
     QList<QSerialPortInfo> infos = QSerialPortInfo::availablePorts();
     int i = 0;
     foreach (info, infos) {
         if(info.portName() == arg1) break;
         i++;
     }
     if(i != infos.size ()){//can find
         ui->label_23->setText("[已开启]");
         serial.close();
         serial.setPort(info);
         serial.open(QIODevice::ReadWrite);         //读写打开
     }
     else
     {
         serial.close();
         ui->label_23->setText("[出错]");
     }
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
        return;
    serial.write(ui->lineEdit->text().toLatin1());
}

void MainWindow::initSeialPort()
{

    connect(&serial,SIGNAL(readyRead()),this,SLOT(serialRead()));   //连接槽

    //get name for choose
    QList<QSerialPortInfo>  infos = QSerialPortInfo::availablePorts();
    if(infos.isEmpty())
    {
        ui->comboBox->addItem("无效");
        return;
    }
    ui->comboBox->addItem("串口");
    foreach (QSerialPortInfo info, infos) {
        ui->comboBox->addItem(info.portName());
    }
}



void MainWindow::serialRead()
{
    ui->textEdit->append(serial.readAll());
}
