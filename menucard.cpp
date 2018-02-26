#include "menucard.h"
#include "ui_menucard.h"
#include"seconddialog.h"


MenuCard::MenuCard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuCard)
{
    ui->setupUi(this);
}

MenuCard::~MenuCard()
{
    delete ui;
}

void MenuCard::on_pushButton_clicked()
{
    hide();
    SecondDialog *s=new SecondDialog(this);
    s->showMaximized();
}
