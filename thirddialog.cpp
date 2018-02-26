#include "thirddialog.h"
#include "ui_thirddialog.h"

int TOTAL;
int chicken65,chickenbiryani,mutton,fish,N1TOTAL,N2TOTAL,N3TOTAL,N4TOTAL;
int vegmeals,vegbiryani,vegmanchu,panniru,V1TOTAL,V2TOTAL,V3TOTAL,V4TOTAL;

thirdDialog::thirdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdDialog)
{
    ui->setupUi(this);
/*
    ui->label_31->setText(QString::number(vegmeals));
    ui->label_39->setText(QString::number(V1TOTAL));
    ui->label_32->setText(QString::number(vegbiryani));
    ui->label_40->setText(QString::number(V2TOTAL));
    ui->label_33->setText(QString::number(vegmanchu));
    ui->label_41->setText(QString::number(V3TOTAL));
    ui->label_34->setText(QString::number(panniru));
    ui->label_42->setText(QString::number(V4TOTAL));

    ui->label_9->setText(QString::number(chicken65));
     //     ui->label->setText("CHICKEN 65");
    ui->label_19->setText(QString::number(N1TOTAL));
      //     ui->label_15->setText("*     200    =");

    ui->label_10->setText(QString::number(chickenbiryani));
    ui->label_20->setText(QString::number(N2TOTAL));
    ui->label_11->setText(QString::number(mutton));
    ui->label_21->setText(QString::number(N3TOTAL));
    ui->label_12->setText(QString::number(fish));
    ui->label_22->setText(QString::number(N4TOTAL));

    ui->label_45->setText(QString::number(TOTAL));*/
}

thirdDialog::~thirdDialog()
{
    delete ui;
}

