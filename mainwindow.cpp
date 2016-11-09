#include "mainwindow.h"
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
