#include "ControlWindow.h"
#include "ui_ControlWindow.h"

ControlWindow::ControlWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ControlWindow)
{
    ui->setupUi(this);
}

ControlWindow::~ControlWindow()
{
    delete ui;
}

void ControlWindow::on_setBgColorButton_clicked()
{
    double red = ui->redBgDSpinBox->value();
    double green = ui->greenBgDSpinBox->value();
    double blue = ui->blueBgDSpinBox->value();
    Color color( red, green, blue );
    emit signalSetBackgroundColor( color );
}
