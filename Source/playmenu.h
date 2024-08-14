#ifndef PLAYMENU_H
#define PLAYMENU_H

#include <QMainWindow>

class PlayMenu : public QMainWindow
{
    Q_OBJECT
public:
    explicit PlayMenu(QWidget *parent = nullptr);

signals:
    void showMainWindow();
};

#endif // PLAYMENU_H
