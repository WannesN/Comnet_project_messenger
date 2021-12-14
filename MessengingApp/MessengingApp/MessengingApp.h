#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MessengingApp.h"

class MessengingApp : public QMainWindow
{
    Q_OBJECT

public:
    MessengingApp(QWidget *parent = Q_NULLPTR);

private:
    Ui::MessengingAppClass ui;
};
