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
    void showMainMenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PlayMenu *ui;
};

#endif // PLAYMENU_H
