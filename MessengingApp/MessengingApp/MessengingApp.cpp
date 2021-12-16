#include "MessengingApp.h"
//#ifndef WIN32_LEAN_AND_MEAN
//#define WIN32_LEAN_AND_MEAN
//#endif
//
//#include <windows.h>
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#include <iphlpapi.h>
//#include <stdio.h>
//
//#define DEFAULT_PORT "27015"

#pragma comment(lib, "Ws2_32.lib")

MessengingApp::MessengingApp(char **argv,QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

//	WSADATA wsaData;
//
//	int iResult;
//	QString iResult_str;
//
//	// Initialize Winsock
//	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
//	iResult_str = QString::number(iResult);
//	ui.DebugLabel->setText(iResult_str);
//
//	struct addrinfo *result = NULL,
//		*ptr = NULL,
//		hints;
//
//	ZeroMemory(&hints, sizeof(hints));
//	hints.ai_family = AF_UNSPEC;
//	hints.ai_socktype = SOCK_STREAM;
//	hints.ai_protocol = IPPROTO_TCP;
//
//	iResult = getaddrinfo(argv[1], DEFAULT_PORT, &hints, &result);
//	if (iResult != 0) {
//		ui.DebugLabel->setText("fuck");
//	}
//
//	SOCKET ConnectSocket = INVALID_SOCKET;
//
//	// Attempt to connect to the first address returned by
//// the call to getaddrinfo
//	ptr = result;
//
//	// Create a SOCKET for connecting to server
//	ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype,
//		ptr->ai_protocol);
//
//	if (ConnectSocket == INVALID_SOCKET) {
//		ui.DebugLabel->setText("balls");
//	}
//
//	//iResult = Winsock::connect(ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
//
}

void MessengingApp::on_testButton_clicked() {
	
}
