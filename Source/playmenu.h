#ifndef PLAYMENU_H
#define PLAYMENU_H

#include <QMainWindow>

namespace Ui {
class PlayMenu;
}

class PlayMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayMenu(QWidget *parent = nullptr);
    ~PlayMenu();

signals:
    void Back();

private slots:

    void on_BackButton_clicked();

private:
    Ui::PlayMenu *ui;
};

#endif // PLAYMENU_H
