#include "mainwindow.h"
#include "servertab.h"
#include "socketconnectiontab.h"
#include "ui_mainwindow.h"

#include <QMetaEnum>
#include <qurlvalidator.h>

MainWindow::MainWindow(QWidget *parent) :
	QDialog(parent, Qt::WindowCloseButtonHint | Qt::WindowMinMaxButtonsHint),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	ui->urlLineEdit->setValidator(new QUrlValidator({QStringLiteral("ws"), QStringLiteral("wss")}, this));
	ui->versionComboBox->addItem(tr("Version 13"), 13);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_connectButton_clicked()
{
	auto connectionTab = new SocketConnectionTab(ui->tabWidget);
	ui->tabWidget->addTab(connectionTab,
						  connectionTab->windowIcon(),
						  connectionTab->windowTitle() + "___");
}

void MainWindow::on_createButton_clicked()
{
	auto serverTab = new ServerTab(ui->tabWidget);
	ui->tabWidget->addTab(serverTab,
						  serverTab->windowIcon(),
						  serverTab->windowTitle() + "___");
}
