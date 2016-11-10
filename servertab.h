#ifndef SERVERTAB_H
#define SERVERTAB_H

#include <QFrame>

namespace Ui {
class ServerTab;
}

class ServerTab : public QFrame
{
	Q_OBJECT

public:
	explicit ServerTab(QWidget *parent = nullptr);
	~ServerTab();

private:
	Ui::ServerTab *ui;
};

#endif // SERVERTAB_H
