#include "servertab.h"
#include "ui_servertab.h"

ServerTab::ServerTab(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::ServerTab)
{
	ui->setupUi(this);
}

ServerTab::~ServerTab()
{
	delete ui;
}
