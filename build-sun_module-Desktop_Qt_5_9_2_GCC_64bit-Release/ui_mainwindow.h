/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *battery_voltage_2;
    QLineEdit *battery_current_2;
    QLineEdit *panel_voltage_2;
    QLineEdit *panel_current_2;
    QLineEdit *five_voltage_2;
    QLineEdit *five_current_2;
    QLineEdit *twelve_voltage_2;
    QLineEdit *twelve_current_2;
    QLineEdit *wind_motor_power_2;
    QLineEdit *load_power_2;
    QLineEdit *wind_motor_current_2;
    QLineEdit *environment_temperature_2;
    QLineEdit *fourty_eight_current_2;
    QLineEdit *wind_motor_voltage_2;
    QLineEdit *fourty_eight_voltage_2;
    QLineEdit *panel_power_2;
    QLineEdit *shutdown_time_2;
    QLineEdit *battery_power_2;
    QLineEdit *light_control_2;
    QLineEdit *battery_type_2;
    QLineEdit *low_restore_voltage_2;
    QLineEdit *low_protect_voltage_2;
    QLineEdit *limit_charging_voltage_2;
    QLineEdit *boot_time_2;
    QLineEdit *fourth_eight_output_status_2;
    QLineEdit *push_time_2;
    QLineEdit *fourty_eight_short_protection_2;
    QLineEdit *five_output_status_2;
    QLineEdit *five_short_protection_2;
    QLineEdit *twelve_short_protection_2;
    QLineEdit *overpressure_state_2;
    QLineEdit *twelve_output_status_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *sendLineEdit;
    QPushButton *sendButton;
    QLineEdit *clearLineEdit;
    QPushButton *clearButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *IPLineEdit;
    QPushButton *connnectButton;
    QLabel *label_2;
    QLineEdit *portLineEdit;
    QPushButton *disconnectButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *fourty_eight_voltage;
    QLabel *fourty_eight_current;
    QLabel *wind_motor_voltage;
    QLabel *wind_motor_current;
    QLabel *environment_temperature;
    QLabel *panel_power;
    QLabel *wind_motor_power;
    QLabel *load_power;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *overpressure_state;
    QLabel *five_short_protection;
    QLabel *twelve_short_protection;
    QLabel *fourty_eight_short_protection;
    QLabel *five_output_status;
    QLabel *twelve_output_status;
    QLabel *fourth_eight_output_status;
    QLabel *push_time;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QLabel *limit_charging_voltage;
    QLabel *low_restore_voltage;
    QLabel *low_protect_voltage;
    QLabel *light_control;
    QLabel *battery_type;
    QLabel *boot_time;
    QLabel *shutdown_time;
    QLabel *battery_power;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout;
    QLabel *battery_voltage;
    QLabel *battery_current;
    QLabel *panel_voltage;
    QLabel *panel_current;
    QLabel *five_voltage;
    QLabel *five_current;
    QLabel *twelve_voltage;
    QLabel *twelve_current;
    QLineEdit *lineEdit_test;
    QLabel *label_time;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QComboBox *comboBox;
    QLabel *label_23;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(778, 512);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        battery_voltage_2 = new QLineEdit(centralWidget);
        battery_voltage_2->setObjectName(QStringLiteral("battery_voltage_2"));
        battery_voltage_2->setGeometry(QRect(130, 160, 41, 25));
        battery_voltage_2->setMinimumSize(QSize(0, 25));
        battery_voltage_2->setMaximumSize(QSize(16777215, 25));
        battery_current_2 = new QLineEdit(centralWidget);
        battery_current_2->setObjectName(QStringLiteral("battery_current_2"));
        battery_current_2->setGeometry(QRect(130, 190, 41, 25));
        battery_current_2->setMinimumSize(QSize(0, 25));
        battery_current_2->setMaximumSize(QSize(16777215, 25));
        panel_voltage_2 = new QLineEdit(centralWidget);
        panel_voltage_2->setObjectName(QStringLiteral("panel_voltage_2"));
        panel_voltage_2->setGeometry(QRect(130, 220, 41, 25));
        panel_voltage_2->setMinimumSize(QSize(0, 25));
        panel_voltage_2->setMaximumSize(QSize(16777215, 25));
        panel_current_2 = new QLineEdit(centralWidget);
        panel_current_2->setObjectName(QStringLiteral("panel_current_2"));
        panel_current_2->setGeometry(QRect(130, 250, 41, 25));
        panel_current_2->setMinimumSize(QSize(0, 25));
        panel_current_2->setMaximumSize(QSize(16777215, 25));
        five_voltage_2 = new QLineEdit(centralWidget);
        five_voltage_2->setObjectName(QStringLiteral("five_voltage_2"));
        five_voltage_2->setGeometry(QRect(130, 280, 41, 25));
        five_voltage_2->setMinimumSize(QSize(0, 25));
        five_voltage_2->setMaximumSize(QSize(16777215, 25));
        five_current_2 = new QLineEdit(centralWidget);
        five_current_2->setObjectName(QStringLiteral("five_current_2"));
        five_current_2->setGeometry(QRect(130, 310, 41, 25));
        five_current_2->setMinimumSize(QSize(0, 25));
        five_current_2->setMaximumSize(QSize(16777215, 25));
        twelve_voltage_2 = new QLineEdit(centralWidget);
        twelve_voltage_2->setObjectName(QStringLiteral("twelve_voltage_2"));
        twelve_voltage_2->setGeometry(QRect(130, 340, 41, 25));
        twelve_voltage_2->setMinimumSize(QSize(0, 25));
        twelve_voltage_2->setMaximumSize(QSize(16777215, 25));
        twelve_current_2 = new QLineEdit(centralWidget);
        twelve_current_2->setObjectName(QStringLiteral("twelve_current_2"));
        twelve_current_2->setGeometry(QRect(130, 370, 41, 25));
        twelve_current_2->setMinimumSize(QSize(0, 25));
        twelve_current_2->setMaximumSize(QSize(16777215, 25));
        wind_motor_power_2 = new QLineEdit(centralWidget);
        wind_motor_power_2->setObjectName(QStringLiteral("wind_motor_power_2"));
        wind_motor_power_2->setGeometry(QRect(350, 340, 41, 25));
        wind_motor_power_2->setMinimumSize(QSize(0, 25));
        load_power_2 = new QLineEdit(centralWidget);
        load_power_2->setObjectName(QStringLiteral("load_power_2"));
        load_power_2->setGeometry(QRect(350, 370, 41, 25));
        load_power_2->setMinimumSize(QSize(0, 25));
        wind_motor_current_2 = new QLineEdit(centralWidget);
        wind_motor_current_2->setObjectName(QStringLiteral("wind_motor_current_2"));
        wind_motor_current_2->setGeometry(QRect(350, 250, 41, 25));
        wind_motor_current_2->setMinimumSize(QSize(0, 25));
        environment_temperature_2 = new QLineEdit(centralWidget);
        environment_temperature_2->setObjectName(QStringLiteral("environment_temperature_2"));
        environment_temperature_2->setGeometry(QRect(350, 280, 41, 25));
        environment_temperature_2->setMinimumSize(QSize(0, 25));
        fourty_eight_current_2 = new QLineEdit(centralWidget);
        fourty_eight_current_2->setObjectName(QStringLiteral("fourty_eight_current_2"));
        fourty_eight_current_2->setGeometry(QRect(350, 190, 41, 25));
        fourty_eight_current_2->setMinimumSize(QSize(0, 25));
        wind_motor_voltage_2 = new QLineEdit(centralWidget);
        wind_motor_voltage_2->setObjectName(QStringLiteral("wind_motor_voltage_2"));
        wind_motor_voltage_2->setGeometry(QRect(350, 220, 41, 25));
        wind_motor_voltage_2->setMinimumSize(QSize(0, 25));
        fourty_eight_voltage_2 = new QLineEdit(centralWidget);
        fourty_eight_voltage_2->setObjectName(QStringLiteral("fourty_eight_voltage_2"));
        fourty_eight_voltage_2->setGeometry(QRect(350, 160, 41, 25));
        fourty_eight_voltage_2->setMinimumSize(QSize(0, 25));
        panel_power_2 = new QLineEdit(centralWidget);
        panel_power_2->setObjectName(QStringLiteral("panel_power_2"));
        panel_power_2->setGeometry(QRect(350, 310, 41, 25));
        panel_power_2->setMinimumSize(QSize(0, 25));
        shutdown_time_2 = new QLineEdit(centralWidget);
        shutdown_time_2->setObjectName(QStringLiteral("shutdown_time_2"));
        shutdown_time_2->setGeometry(QRect(530, 340, 41, 25));
        shutdown_time_2->setMinimumSize(QSize(0, 25));
        battery_power_2 = new QLineEdit(centralWidget);
        battery_power_2->setObjectName(QStringLiteral("battery_power_2"));
        battery_power_2->setGeometry(QRect(530, 370, 41, 25));
        battery_power_2->setMinimumSize(QSize(0, 25));
        light_control_2 = new QLineEdit(centralWidget);
        light_control_2->setObjectName(QStringLiteral("light_control_2"));
        light_control_2->setGeometry(QRect(530, 250, 41, 25));
        light_control_2->setMinimumSize(QSize(0, 25));
        battery_type_2 = new QLineEdit(centralWidget);
        battery_type_2->setObjectName(QStringLiteral("battery_type_2"));
        battery_type_2->setGeometry(QRect(530, 280, 41, 25));
        battery_type_2->setMinimumSize(QSize(0, 25));
        low_restore_voltage_2 = new QLineEdit(centralWidget);
        low_restore_voltage_2->setObjectName(QStringLiteral("low_restore_voltage_2"));
        low_restore_voltage_2->setGeometry(QRect(530, 190, 41, 25));
        low_restore_voltage_2->setMinimumSize(QSize(0, 25));
        low_protect_voltage_2 = new QLineEdit(centralWidget);
        low_protect_voltage_2->setObjectName(QStringLiteral("low_protect_voltage_2"));
        low_protect_voltage_2->setGeometry(QRect(530, 220, 41, 25));
        low_protect_voltage_2->setMinimumSize(QSize(0, 25));
        limit_charging_voltage_2 = new QLineEdit(centralWidget);
        limit_charging_voltage_2->setObjectName(QStringLiteral("limit_charging_voltage_2"));
        limit_charging_voltage_2->setGeometry(QRect(530, 160, 41, 25));
        limit_charging_voltage_2->setMinimumSize(QSize(0, 25));
        boot_time_2 = new QLineEdit(centralWidget);
        boot_time_2->setObjectName(QStringLiteral("boot_time_2"));
        boot_time_2->setGeometry(QRect(530, 310, 41, 25));
        boot_time_2->setMinimumSize(QSize(0, 25));
        fourth_eight_output_status_2 = new QLineEdit(centralWidget);
        fourth_eight_output_status_2->setObjectName(QStringLiteral("fourth_eight_output_status_2"));
        fourth_eight_output_status_2->setGeometry(QRect(700, 340, 41, 25));
        fourth_eight_output_status_2->setMinimumSize(QSize(0, 25));
        push_time_2 = new QLineEdit(centralWidget);
        push_time_2->setObjectName(QStringLiteral("push_time_2"));
        push_time_2->setGeometry(QRect(700, 370, 41, 25));
        push_time_2->setMinimumSize(QSize(0, 25));
        fourty_eight_short_protection_2 = new QLineEdit(centralWidget);
        fourty_eight_short_protection_2->setObjectName(QStringLiteral("fourty_eight_short_protection_2"));
        fourty_eight_short_protection_2->setGeometry(QRect(700, 250, 41, 25));
        fourty_eight_short_protection_2->setMinimumSize(QSize(0, 25));
        five_output_status_2 = new QLineEdit(centralWidget);
        five_output_status_2->setObjectName(QStringLiteral("five_output_status_2"));
        five_output_status_2->setGeometry(QRect(700, 280, 41, 25));
        five_output_status_2->setMinimumSize(QSize(0, 25));
        five_short_protection_2 = new QLineEdit(centralWidget);
        five_short_protection_2->setObjectName(QStringLiteral("five_short_protection_2"));
        five_short_protection_2->setGeometry(QRect(700, 190, 41, 25));
        five_short_protection_2->setMinimumSize(QSize(0, 25));
        twelve_short_protection_2 = new QLineEdit(centralWidget);
        twelve_short_protection_2->setObjectName(QStringLiteral("twelve_short_protection_2"));
        twelve_short_protection_2->setGeometry(QRect(700, 220, 41, 25));
        twelve_short_protection_2->setMinimumSize(QSize(0, 25));
        overpressure_state_2 = new QLineEdit(centralWidget);
        overpressure_state_2->setObjectName(QStringLiteral("overpressure_state_2"));
        overpressure_state_2->setGeometry(QRect(700, 160, 41, 25));
        overpressure_state_2->setMinimumSize(QSize(0, 25));
        twelve_output_status_2 = new QLineEdit(centralWidget);
        twelve_output_status_2->setObjectName(QStringLiteral("twelve_output_status_2"));
        twelve_output_status_2->setGeometry(QRect(700, 310, 41, 25));
        twelve_output_status_2->setMinimumSize(QSize(0, 25));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 70, 201, 61));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sendLineEdit = new QLineEdit(layoutWidget);
        sendLineEdit->setObjectName(QStringLiteral("sendLineEdit"));

        gridLayout->addWidget(sendLineEdit, 0, 0, 1, 1);

        sendButton = new QPushButton(layoutWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        gridLayout->addWidget(sendButton, 0, 1, 1, 1);

        clearLineEdit = new QLineEdit(layoutWidget);
        clearLineEdit->setObjectName(QStringLiteral("clearLineEdit"));

        gridLayout->addWidget(clearLineEdit, 1, 0, 1, 1);

        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        gridLayout->addWidget(clearButton, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 0, 281, 70));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        IPLineEdit = new QLineEdit(layoutWidget1);
        IPLineEdit->setObjectName(QStringLiteral("IPLineEdit"));

        gridLayout_2->addWidget(IPLineEdit, 0, 1, 1, 1);

        connnectButton = new QPushButton(layoutWidget1);
        connnectButton->setObjectName(QStringLiteral("connnectButton"));

        gridLayout_2->addWidget(connnectButton, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        portLineEdit = new QLineEdit(layoutWidget1);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));

        gridLayout_2->addWidget(portLineEdit, 1, 1, 1, 1);

        disconnectButton = new QPushButton(layoutWidget1);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        gridLayout_2->addWidget(disconnectButton, 1, 2, 1, 1);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(200, 160, 137, 228));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        fourty_eight_voltage = new QLabel(layoutWidget2);
        fourty_eight_voltage->setObjectName(QStringLiteral("fourty_eight_voltage"));

        verticalLayout_2->addWidget(fourty_eight_voltage);

        fourty_eight_current = new QLabel(layoutWidget2);
        fourty_eight_current->setObjectName(QStringLiteral("fourty_eight_current"));

        verticalLayout_2->addWidget(fourty_eight_current);

        wind_motor_voltage = new QLabel(layoutWidget2);
        wind_motor_voltage->setObjectName(QStringLiteral("wind_motor_voltage"));

        verticalLayout_2->addWidget(wind_motor_voltage);

        wind_motor_current = new QLabel(layoutWidget2);
        wind_motor_current->setObjectName(QStringLiteral("wind_motor_current"));

        verticalLayout_2->addWidget(wind_motor_current);

        environment_temperature = new QLabel(layoutWidget2);
        environment_temperature->setObjectName(QStringLiteral("environment_temperature"));

        verticalLayout_2->addWidget(environment_temperature);

        panel_power = new QLabel(layoutWidget2);
        panel_power->setObjectName(QStringLiteral("panel_power"));

        verticalLayout_2->addWidget(panel_power);

        wind_motor_power = new QLabel(layoutWidget2);
        wind_motor_power->setObjectName(QStringLiteral("wind_motor_power"));

        verticalLayout_2->addWidget(wind_motor_power);

        load_power = new QLabel(layoutWidget2);
        load_power->setObjectName(QStringLiteral("load_power"));

        verticalLayout_2->addWidget(load_power);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(600, 160, 89, 228));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        overpressure_state = new QLabel(layoutWidget3);
        overpressure_state->setObjectName(QStringLiteral("overpressure_state"));

        verticalLayout_4->addWidget(overpressure_state);

        five_short_protection = new QLabel(layoutWidget3);
        five_short_protection->setObjectName(QStringLiteral("five_short_protection"));

        verticalLayout_4->addWidget(five_short_protection);

        twelve_short_protection = new QLabel(layoutWidget3);
        twelve_short_protection->setObjectName(QStringLiteral("twelve_short_protection"));

        verticalLayout_4->addWidget(twelve_short_protection);

        fourty_eight_short_protection = new QLabel(layoutWidget3);
        fourty_eight_short_protection->setObjectName(QStringLiteral("fourty_eight_short_protection"));

        verticalLayout_4->addWidget(fourty_eight_short_protection);

        five_output_status = new QLabel(layoutWidget3);
        five_output_status->setObjectName(QStringLiteral("five_output_status"));

        verticalLayout_4->addWidget(five_output_status);

        twelve_output_status = new QLabel(layoutWidget3);
        twelve_output_status->setObjectName(QStringLiteral("twelve_output_status"));

        verticalLayout_4->addWidget(twelve_output_status);

        fourth_eight_output_status = new QLabel(layoutWidget3);
        fourth_eight_output_status->setObjectName(QStringLiteral("fourth_eight_output_status"));

        verticalLayout_4->addWidget(fourth_eight_output_status);

        push_time = new QLabel(layoutWidget3);
        push_time->setObjectName(QStringLiteral("push_time"));

        verticalLayout_4->addWidget(push_time);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(420, 160, 92, 228));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        limit_charging_voltage = new QLabel(layoutWidget4);
        limit_charging_voltage->setObjectName(QStringLiteral("limit_charging_voltage"));

        verticalLayout_3->addWidget(limit_charging_voltage);

        low_restore_voltage = new QLabel(layoutWidget4);
        low_restore_voltage->setObjectName(QStringLiteral("low_restore_voltage"));

        verticalLayout_3->addWidget(low_restore_voltage);

        low_protect_voltage = new QLabel(layoutWidget4);
        low_protect_voltage->setObjectName(QStringLiteral("low_protect_voltage"));

        verticalLayout_3->addWidget(low_protect_voltage);

        light_control = new QLabel(layoutWidget4);
        light_control->setObjectName(QStringLiteral("light_control"));

        verticalLayout_3->addWidget(light_control);

        battery_type = new QLabel(layoutWidget4);
        battery_type->setObjectName(QStringLiteral("battery_type"));

        verticalLayout_3->addWidget(battery_type);

        boot_time = new QLabel(layoutWidget4);
        boot_time->setObjectName(QStringLiteral("boot_time"));

        verticalLayout_3->addWidget(boot_time);

        shutdown_time = new QLabel(layoutWidget4);
        shutdown_time->setObjectName(QStringLiteral("shutdown_time"));

        verticalLayout_3->addWidget(shutdown_time);

        battery_power = new QLabel(layoutWidget4);
        battery_power->setObjectName(QStringLiteral("battery_power"));

        verticalLayout_3->addWidget(battery_power);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(40, 160, 77, 228));
        verticalLayout = new QVBoxLayout(layoutWidget5);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        battery_voltage = new QLabel(layoutWidget5);
        battery_voltage->setObjectName(QStringLiteral("battery_voltage"));

        verticalLayout->addWidget(battery_voltage);

        battery_current = new QLabel(layoutWidget5);
        battery_current->setObjectName(QStringLiteral("battery_current"));

        verticalLayout->addWidget(battery_current);

        panel_voltage = new QLabel(layoutWidget5);
        panel_voltage->setObjectName(QStringLiteral("panel_voltage"));

        verticalLayout->addWidget(panel_voltage);

        panel_current = new QLabel(layoutWidget5);
        panel_current->setObjectName(QStringLiteral("panel_current"));

        verticalLayout->addWidget(panel_current);

        five_voltage = new QLabel(layoutWidget5);
        five_voltage->setObjectName(QStringLiteral("five_voltage"));

        verticalLayout->addWidget(five_voltage);

        five_current = new QLabel(layoutWidget5);
        five_current->setObjectName(QStringLiteral("five_current"));

        verticalLayout->addWidget(five_current);

        twelve_voltage = new QLabel(layoutWidget5);
        twelve_voltage->setObjectName(QStringLiteral("twelve_voltage"));

        verticalLayout->addWidget(twelve_voltage);

        twelve_current = new QLabel(layoutWidget5);
        twelve_current->setObjectName(QStringLiteral("twelve_current"));

        verticalLayout->addWidget(twelve_current);

        lineEdit_test = new QLineEdit(centralWidget);
        lineEdit_test->setObjectName(QStringLiteral("lineEdit_test"));
        lineEdit_test->setGeometry(QRect(330, 110, 113, 25));
        label_time = new QLabel(centralWidget);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(490, 420, 241, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 160, 16, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 170, 16, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 220, 16, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 290, 16, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 340, 16, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(400, 220, 16, 17));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(580, 160, 16, 17));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(580, 190, 16, 17));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(580, 220, 16, 17));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(180, 190, 16, 17));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(180, 260, 16, 17));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(180, 320, 16, 17));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(180, 370, 16, 17));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(400, 200, 16, 17));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(400, 280, 16, 17));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(400, 250, 16, 17));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(400, 310, 21, 17));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(400, 340, 21, 17));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(400, 370, 21, 17));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(580, 370, 21, 17));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(330, 0, 86, 25));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(430, 0, 67, 17));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(330, 30, 104, 70));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(480, 50, 113, 25));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 80, 89, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 778, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        sendButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        clearButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200", Q_NULLPTR));
        connnectButton->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
        disconnectButton->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200", Q_NULLPTR));
        fourty_eight_voltage->setText(QApplication::translate("MainWindow", "48V\347\224\265\345\216\213", Q_NULLPTR));
        fourty_eight_current->setText(QApplication::translate("MainWindow", "48V\347\224\265\346\265\201", Q_NULLPTR));
        wind_motor_voltage->setText(QApplication::translate("MainWindow", "\351\243\216\350\203\275\347\224\265\346\234\272\347\224\265\345\216\213", Q_NULLPTR));
        wind_motor_current->setText(QApplication::translate("MainWindow", "\351\243\216\350\203\275\347\224\265\346\234\272\347\224\265\346\265\201", Q_NULLPTR));
        environment_temperature->setText(QApplication::translate("MainWindow", "\347\216\257\345\242\203\346\270\251\345\272\246", Q_NULLPTR));
        panel_power->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\346\235\277\347\264\257\350\256\241\345\217\221\347\224\265\351\207\217", Q_NULLPTR));
        wind_motor_power->setText(QApplication::translate("MainWindow", "\351\243\216\350\203\275\347\224\265\346\234\272\347\264\257\350\256\241\345\217\221\347\224\265\351\207\217", Q_NULLPTR));
        load_power->setText(QApplication::translate("MainWindow", "\350\264\237\350\275\275\347\264\257\350\256\241\347\224\250\347\224\265\351\207\217", Q_NULLPTR));
        overpressure_state->setText(QApplication::translate("MainWindow", "\350\266\205\345\216\213\347\212\266\346\200\201", Q_NULLPTR));
        five_short_protection->setText(QApplication::translate("MainWindow", "5V\347\237\255\350\267\257\344\277\235\346\212\244", Q_NULLPTR));
        twelve_short_protection->setText(QApplication::translate("MainWindow", "12V\347\237\255\350\267\257\344\277\235\346\212\244", Q_NULLPTR));
        fourty_eight_short_protection->setText(QApplication::translate("MainWindow", "48V\347\237\255\350\267\257\344\277\235\346\212\244", Q_NULLPTR));
        five_output_status->setText(QApplication::translate("MainWindow", "5V\350\276\223\345\207\272\347\212\266\346\200\201", Q_NULLPTR));
        twelve_output_status->setText(QApplication::translate("MainWindow", "12V\350\276\223\345\207\272\347\212\266\346\200\201", Q_NULLPTR));
        fourth_eight_output_status->setText(QApplication::translate("MainWindow", "48V\350\276\223\345\207\272\347\212\266\346\200\201", Q_NULLPTR));
        push_time->setText(QApplication::translate("MainWindow", "\346\216\250\351\200\201\346\227\266\351\227\264 ", Q_NULLPTR));
        limit_charging_voltage->setText(QApplication::translate("MainWindow", "\346\210\252\346\255\242\345\205\205\347\224\265\347\224\265\345\216\213", Q_NULLPTR));
        low_restore_voltage->setText(QApplication::translate("MainWindow", "\344\275\216\345\216\213\346\201\242\345\244\215\347\224\265\345\216\213", Q_NULLPTR));
        low_protect_voltage->setText(QApplication::translate("MainWindow", "\344\275\216\345\216\213\344\277\235\346\212\244\347\224\265\345\216\213", Q_NULLPTR));
        light_control->setText(QApplication::translate("MainWindow", "\345\205\211\346\216\247", Q_NULLPTR));
        battery_type->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\347\247\215\347\261\273", Q_NULLPTR));
        boot_time->setText(QApplication::translate("MainWindow", "\345\274\200\346\234\272\346\227\266\351\227\264", Q_NULLPTR));
        shutdown_time->setText(QApplication::translate("MainWindow", "\345\205\263\346\234\272\346\227\266\351\227\264", Q_NULLPTR));
        battery_power->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\347\224\265\351\207\217", Q_NULLPTR));
        battery_voltage->setText(QApplication::translate("MainWindow", "\350\223\204\347\224\265\346\261\240\347\224\265\345\216\213", Q_NULLPTR));
        battery_current->setText(QApplication::translate("MainWindow", "\350\223\204\347\224\265\346\261\240\347\224\265\346\265\201", Q_NULLPTR));
        panel_voltage->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\346\235\277\347\224\265\345\216\213", Q_NULLPTR));
        panel_current->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\346\235\277\347\224\265\346\265\201", Q_NULLPTR));
        five_voltage->setText(QApplication::translate("MainWindow", "5V\347\224\265\345\216\213", Q_NULLPTR));
        five_current->setText(QApplication::translate("MainWindow", "5V\347\224\265\346\265\201", Q_NULLPTR));
        twelve_voltage->setText(QApplication::translate("MainWindow", "12V\347\224\265\345\216\213", Q_NULLPTR));
        twelve_current->setText(QApplication::translate("MainWindow", "12V\347\224\265\346\265\201", Q_NULLPTR));
        label_time->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "AH", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "AH", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "AH", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "AH", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
