#include "socketconnectiontab.h"
#include "ui_socketconnectiontab.h"

SocketConnectionTab::SocketConnectionTab(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::SocketConnectionTab)
{
	ui->setupUi(this);
}

SocketConnectionTab::~SocketConnectionTab()
{
	delete ui;
}
