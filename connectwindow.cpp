#include "connectwindow.h"
#include "servertab.h"
#include "socketconnectiontab.h"
#include "ui_connectwindow.h"

#include <QDockWidget>
#include <qurlvalidator.h>

ConnectWindow::ConnectWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::ConnectWindow)
{
	ui->setupUi(this);

	ui->urlLineEdit->setValidator(new QUrlValidator({QStringLiteral("ws"), QStringLiteral("wss")}, this));
	ui->versionComboBox->addItem(tr("Version 13"), 13);
}

ConnectWindow::~ConnectWindow()
{
	delete ui;
}

void ConnectWindow::on_connectButton_clicked()
{
	auto dock = new QDockWidget(this);
	dock->setWidget(new SocketConnectionTab(dock));
	dock->setWindowTitle(tr("Client: ") + dock->widget()->windowTitle());
	dock->setWindowIcon(dock->widget()->windowIcon());
	addDockWidget(Qt::BottomDockWidgetArea, dock);
}

void ConnectWindow::on_createButton_clicked()
{
	auto dock = new QDockWidget(this);
	dock->setWidget(new ServerTab(dock));
	dock->setWindowTitle(tr("Server: ") + dock->widget()->windowTitle());
	dock->setWindowIcon(dock->widget()->windowIcon());
	addDockWidget(Qt::BottomDockWidgetArea, dock);
}
