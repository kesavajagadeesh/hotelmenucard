#ifndef MENUCARD_H
#define MENUCARD_H

#include <QMainWindow>

namespace Ui {
class MenuCard;
}

class MenuCard : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuCard(QWidget *parent = 0);
    ~MenuCard();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MenuCard *ui;
};

#endif // MENUCARD_H
