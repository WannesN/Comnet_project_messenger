#include "MessengingApp.h"
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <stdio.h>

#pragma comment(lib, "Ws2_32.lib")

MessengingApp::MessengingApp(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	WSADATA wsaData;

	int iResult;
	QString iResult_str;

	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	iResult_str = QString::number(iResult);
	ui.DebugLabel->setText(iResult_str);
}
