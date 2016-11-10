#ifndef SOCKETCONNECTIONTAB_H
#define SOCKETCONNECTIONTAB_H

#include <QFrame>

namespace Ui {
class SocketConnectionTab;
}

class SocketConnectionTab : public QFrame
{
	Q_OBJECT

public:
	explicit SocketConnectionTab(QWidget *parent = nullptr);
	~SocketConnectionTab();

private:
	Ui::SocketConnectionTab *ui;
};

#endif // SOCKETCONNECTIONTAB_H
