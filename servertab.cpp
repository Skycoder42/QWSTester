#include "servertab.h"
#include "ui_servertab.h"

ServerTab::ServerTab(QWidget *parent) :
	QFrame(parent),
	ui(new Ui::ServerTab)
{
	ui->setupUi(this);
}

ServerTab::~ServerTab()
{
	delete ui;
}
