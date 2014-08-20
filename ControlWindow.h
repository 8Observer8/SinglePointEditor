#ifndef CONTROLWINDOW_H
#define CONTROLWINDOW_H

#include <QDialog>
#include "Color.h"

namespace Ui {
    class ControlWindow;
}

class ControlWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ControlWindow(QWidget *parent = 0);
    ~ControlWindow();

signals:
    void signalSetBackgroundColor( const Color &color );

private slots:
    void on_setBgColorButton_clicked();

private:
    Ui::ControlWindow *ui;
};

#endif // CONTROLWINDOW_H
