#include "seconddialog.h"
#include "ui_seconddialog.h"
#include"QDebug"
#include"QMessageBox"
#include"thirddialog.h"
#include"menucard.h"


extern int TOTAL; int VTOTAL,NTOTAL;
extern int chicken65,chickenbiryani,mutton,fish,N1TOTAL,N2TOTAL,N3TOTAL,N4TOTAL;   //nonveg menu varibles...
extern int vegmeals,vegbiryani,vegmanchu,panniru,V1TOTAL,V2TOTAL,V3TOTAL,V4TOTAL;

SecondDialog::SecondDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
{
    ui->setupUi(this);
}

SecondDialog::~SecondDialog()
{
    delete ui;
}
void SecondDialog::NTOTALPRINT(void)
{
    NTOTAL=N1TOTAL+N2TOTAL+N3TOTAL+N4TOTAL;             //function for print the nonveg total
   TOTAL=VTOTAL+NTOTAL;
   ui->lineEdit->setText(QString::number(TOTAL));
}

void SecondDialog::VTOTALPRINT(void)
{
    VTOTAL=V1TOTAL+V2TOTAL+V3TOTAL+V4TOTAL;         //FUNCTION FOR PRINT THE VEG TOTAL
   TOTAL=VTOTAL+NTOTAL;
   ui->lineEdit->setText(QString::number(TOTAL));
}


void SecondDialog::on_pushButton_clicked()
{


       if(TOTAL!=0)
       {
           QMessageBox::StandardButton reply= QMessageBox::question(this,"BILL","sure to place Order",QMessageBox::Yes|QMessageBox::No);

           if(reply==QMessageBox::Yes)
            {
                hide();
                thirdDialog *t=new thirdDialog;
                t->showMaximized();
            }
            else
            {
                hide();
                MenuCard *m=new MenuCard;
                m->showMaximized();
            }
       }
       else
       {
           QMessageBox::warning(this,"warning","NO Items Are Selected Please Select");
       }
   /*  NTOTAL=N1TOTAL+N2TOTAL+N3TOTAL+N4TOTAL;    //nonveg items total

    VTOTAL=V1TOTAL+V2TOTAL+V3TOTAL+V4TOTAL; //veg items total

      TOTAL=VTOTAL+NTOTAL;
     ui->lineEdit->setText(QString::number(TOTAL));
     QMessageBox::information(this,"TOTAL",QString::number(TOTAL)); */
}


void SecondDialog::on_spinBox_valueChanged(const QString &arg1)
{
    if(ui->checkBox->checkState())
    {
        chicken65=arg1.toInt();
        N1TOTAL=chicken65*200;
        ui->label_15->setText(QString::number(chicken65));
        ui->label_17->setText(QString::number(N1TOTAL));
        SecondDialog::NTOTALPRINT();   //nonveg total print
    }
    else
    {
         QMessageBox::warning(this,"warning","Please select Item First");
    }
}

void SecondDialog::on_spinBox_2_valueChanged(const QString &arg1)
{
    if(ui->checkBox_2->checkState())
    {
        chickenbiryani=arg1.toInt();
        N2TOTAL=chickenbiryani*250;
        ui->label_18->setText(QString::number(chickenbiryani));
        ui->label_20->setText(QString::number(N2TOTAL));
        SecondDialog::NTOTALPRINT();   //nonveg total print
    }
    else
    {
         QMessageBox::warning(this,"warning","Please select Item First");
    }
}

void SecondDialog::on_spinBox_3_valueChanged(const QString &arg1)
{
    if(ui->checkBox_3->checkState())
     {
        mutton=arg1.toInt();
        N3TOTAL=mutton*300;
        ui->label_21->setText(QString::number(mutton));
        ui->label_23->setText(QString::number(N3TOTAL));
       SecondDialog::NTOTALPRINT();   //nonveg total print
    }
    else
    {
         QMessageBox::warning(this,"warning","Please select Item First");
    }

}

void SecondDialog::on_spinBox_4_valueChanged(const QString &arg1)
{
    if(ui->checkBox_4->checkState())
    {
        fish=arg1.toInt();
        N4TOTAL=fish*350;
        ui->label_24->setText(QString::number(fish));
        ui->label_26->setText(QString::number(N4TOTAL));
       SecondDialog::NTOTALPRINT();   //nonveg total print
    }
    else
    {
         QMessageBox::warning(this,"warning","Please select Item First");
    }
}

void SecondDialog::on_spinBox_5_valueChanged(const QString &arg1)
{
    if(ui->checkBox_5->checkState())
    {
        vegmeals=arg1.toInt();
        V1TOTAL=vegmeals*120;
        ui->label_30->setText(QString::number(vegmeals));
        ui->label_32->setText(QString::number(V1TOTAL));
         SecondDialog::VTOTALPRINT();   //veg total print
    }
    else
    {
         QMessageBox::warning(this,"warning","Please select Item First");
    }
}

void SecondDialog::on_spinBox_6_valueChanged(const QString &arg1)
{

    if(ui->checkBox_6->checkState())
    {
        vegbiryani=arg1.toInt();
        V2TOTAL=vegbiryani*200;
        ui->label_33->setText(QString::number(vegbiryani));
        ui->label_35->setText(QString::number(V2TOTAL));
         SecondDialog::VTOTALPRINT();   //veg total print
    }
    else
    {
         QMessageBox::warning(this,"warning","Please select Item First");
    }
}

void SecondDialog::on_spinBox_7_valueChanged(const QString &arg1)
{
    if(ui->checkBox_7->checkState())
    {
        vegmanchu=arg1.toInt();
        V3TOTAL=vegmanchu*250;
        ui->label_36->setText(QString::number(vegmanchu));
        ui->label_38->setText(QString::number(V3TOTAL));
          SecondDialog::VTOTALPRINT();   //veg total print
    }
    else
    {
         QMessageBox::warning(this,"warning","Please select Item First");
    }
}

void SecondDialog::on_spinBox_8_valueChanged(const QString &arg1)
{
    if(ui->checkBox_8->checkState())
    {
        panniru=arg1.toInt();
        V4TOTAL=panniru*250;
        ui->label_39->setText(QString::number(panniru));
        ui->label_41->setText(QString::number(V4TOTAL));
         SecondDialog::VTOTALPRINT();   //veg total print
    }
    else
    {
         QMessageBox::warning(this,"warning","Please select Item First");
    }

}

void SecondDialog::on_checkBox_stateChanged(int arg1)
{
    if(!arg1)
    {
        N1TOTAL=0;
        chicken65=0;
        ui->label_15->setText(QString::number(chicken65));
        ui->label_17->setText(QString::number(N1TOTAL));
       SecondDialog::NTOTALPRINT();   //nonveg total print
    }
    else
    {
        chicken65=ui->spinBox->text().toInt();
        N1TOTAL=chicken65*200;
        ui->label_15->setText(QString::number(chicken65));
        ui->label_17->setText(QString::number(N1TOTAL));
        SecondDialog::NTOTALPRINT();   //nonveg total print
    }
}

void SecondDialog::on_checkBox_2_stateChanged(int arg1)
{
    if(!arg1)
    {
        N2TOTAL=0;
        chickenbiryani=0;
        ui->label_18->setText(QString::number(chickenbiryani));
        ui->label_20->setText(QString::number(N2TOTAL));
        SecondDialog::NTOTALPRINT();   //nonveg total print
    }
    else
    {

        chickenbiryani=ui->spinBox_2->text().toInt();
        N2TOTAL=chickenbiryani*250;
        ui->label_18->setText(QString::number(chickenbiryani));
        ui->label_20->setText(QString::number(N2TOTAL));
       SecondDialog::NTOTALPRINT();   //nonveg total print
    }

}

void SecondDialog::on_checkBox_3_stateChanged(int arg1)
{
    if(!arg1)
    {
        N3TOTAL=0;
        mutton=0;
        ui->label_21->setText(QString::number(mutton));
        ui->label_23->setText(QString::number(N3TOTAL));
         SecondDialog::NTOTALPRINT();   //nonveg total print
    }
    else
    {
        mutton=ui->spinBox_3->text().toInt();
        N3TOTAL=mutton*300;
        ui->label_21->setText(QString::number(mutton));
        ui->label_23->setText(QString::number(N3TOTAL));
       SecondDialog::NTOTALPRINT();   //nonveg total print
    }
}

void SecondDialog::on_checkBox_4_stateChanged(int arg1)
{
    if(!arg1)
    {
        N4TOTAL=0;
        fish=0;
        ui->label_24->setText(QString::number(fish));
        ui->label_26->setText(QString::number(N4TOTAL));
         SecondDialog::NTOTALPRINT();   //nonveg total print
    }
    else
    {
        fish=ui->spinBox_4->text().toInt();
        N4TOTAL=fish*350;
        ui->label_24->setText(QString::number(fish));
        ui->label_26->setText(QString::number(N4TOTAL));
         SecondDialog::NTOTALPRINT();   //nonveg total print
    }
}

void SecondDialog::on_checkBox_5_stateChanged(int arg1)
{
    if(!arg1)
    {
        V1TOTAL=vegmeals=0;
        ui->label_30->setText(QString::number(vegmeals));
        ui->label_32->setText(QString::number(V1TOTAL));
         SecondDialog::VTOTALPRINT();   //veg total print
    }
    else
    {
        vegmeals=ui->spinBox_5->text().toInt();
        V1TOTAL=vegmeals*120;
        ui->label_30->setText(QString::number(vegmeals));
        ui->label_32->setText(QString::number(V1TOTAL));
         SecondDialog::VTOTALPRINT();   //veg total print
    }
}

void SecondDialog::on_checkBox_6_stateChanged(int arg1)
{
    if(!arg1)
    {
        V2TOTAL=vegbiryani=0;
        ui->label_33->setText(QString::number(vegbiryani));
        ui->label_35->setText(QString::number(V2TOTAL));
        SecondDialog::VTOTALPRINT();   //veg total print
    }
    else
    {
        vegbiryani=ui->spinBox_6->text().toInt();
        V2TOTAL=vegbiryani*200;
        ui->label_33->setText(QString::number(vegbiryani));
        ui->label_35->setText(QString::number(V2TOTAL));
        SecondDialog::VTOTALPRINT();   //veg total print
    }
}

void SecondDialog::on_checkBox_7_stateChanged(int arg1)
{
    if(!arg1)
    {
        V3TOTAL=vegmanchu=0;
        ui->label_36->setText(QString::number(vegmanchu));
        ui->label_38->setText(QString::number(V3TOTAL));
         SecondDialog::VTOTALPRINT();   //veg total print
    }
    else
    {
        vegmanchu=ui->spinBox_7->text().toInt();
        V3TOTAL=vegmanchu*250;
        ui->label_36->setText(QString::number(vegmanchu));
        ui->label_38->setText(QString::number(V3TOTAL));
         SecondDialog::VTOTALPRINT();   //veg total print
    }
}

void SecondDialog::on_checkBox_8_stateChanged(int arg1)
{
    if(!arg1)
    {
        V4TOTAL=panniru=0;
        ui->label_39->setText(QString::number(panniru));
        ui->label_41->setText(QString::number(V4TOTAL));
        SecondDialog::VTOTALPRINT();   //veg total print
    }
    else
    {
        panniru=ui->spinBox_8->text().toInt();
        V4TOTAL=panniru*250;
        ui->label_39->setText(QString::number(panniru));
        ui->label_41->setText(QString::number(V4TOTAL));
        SecondDialog::VTOTALPRINT();   //veg total print
    }
}
