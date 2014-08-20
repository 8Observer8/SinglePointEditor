#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "SceneWindow.h"
#include "ControlWindow.h"
#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    SceneWindow *m_sceneWindow;
    ControlWindow *m_controlWindow;
};

#endif // MAINWINDOW_H
