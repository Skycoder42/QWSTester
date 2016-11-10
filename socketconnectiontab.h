#ifndef SOCKETCONNECTIONTAB_H
#define SOCKETCONNECTIONTAB_H

#include <QWidget>

namespace Ui {
class SocketConnectionTab;
}

class SocketConnectionTab : public QWidget
{
	Q_OBJECT

public:
	explicit SocketConnectionTab(QWidget *parent = nullptr);
	~SocketConnectionTab();

private:
	Ui::SocketConnectionTab *ui;
};

#endif // SOCKETCONNECTIONTAB_H
