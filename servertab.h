#ifndef SERVERTAB_H
#define SERVERTAB_H

#include <QWidget>

namespace Ui {
class ServerTab;
}

class ServerTab : public QWidget
{
	Q_OBJECT

public:
	explicit ServerTab(QWidget *parent = 0);
	~ServerTab();

private:
	Ui::ServerTab *ui;
};

#endif // SERVERTAB_H
