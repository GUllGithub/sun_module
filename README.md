# sun_module
solar panel data receive

## 首先建立一个测试服务器
### tcpServer.pro
```
#-------------------------------------------------
#
# Project created by QtCreator 2017-12-14T11:28:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tcpServer
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp

HEADERS += \
        widget.h

FORMS += \
        widget.ui
QT += network
```
### widget.h
```
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork>
#include <QMessageBox>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
void sendMessage();

private:
    Ui::Widget *ui;
    QTcpServer *tcpServer;

};

#endif // WIDGET_H

```
### main.cpp
```
#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}

```
### widget.cpp
```
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpServer = new QTcpServer(this);
    if(!tcpServer->listen(QHostAddress::LocalHost,6666))
    {  //**本地主机的6666端口，如果出错就输出错误信息，并关闭
        qDebug() << tcpServer->errorString();
        close();
    }
    //连接信号和相应槽函数
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(sendMessage()));


}

Widget::~Widget()
{
    delete ui;
}

void Widget::sendMessage()
{
    //用于暂存我们要发送的数据
    QByteArray block;

    //使用数据流写入数据
    QDataStream out(&block,QIODevice::WriteOnly);

    //设置数据流的版本，客户端和服务器端使用的版本要相同
    out.setVersion(QDataStream::Qt_4_6);

    out<<(quint16) 0;
    out<<tr("99.949.999.9");
    out.device()->seek(0);
    out<<(quint16) (block.size() - sizeof(quint16));


    //我们获取已经建立的连接的子套接字
    QTcpSocket *clientConnection = tcpServer->nextPendingConnection();

//    connect(clientConnection,SIGNAL(disconnected()),clientConnection,
//           SLOT(deleteLater()));
    clientConnection->write(block);

    //发送数据成功后，显示提示
    ui->statusLabel->setText("send message successful!!!");
}

```
### 运行效果

