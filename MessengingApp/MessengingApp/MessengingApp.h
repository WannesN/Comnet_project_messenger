#pragma once
//#include <windows.h>
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#include <iphlpapi.h>
//#include <stdio.h>
#include <QtWidgets/QMainWindow>
#include "ui_MessengingApp.h"

class MessengingApp : public QMainWindow
{
    Q_OBJECT

public:
    MessengingApp(char **argv,QWidget *parent = Q_NULLPTR);

public slots:
	void MessengingApp::on_testButton_clicked();

private:
    Ui::MessengingAppClass ui;
};
