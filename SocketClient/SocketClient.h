#pragma once

#include <QtWidgets/QWidget>
#include "ui_SocketClient.h"

class SocketClient : public QWidget
{
	Q_OBJECT

public:
	SocketClient(QWidget *parent = Q_NULLPTR);

private:
	Ui::SocketClientClass ui;
};
