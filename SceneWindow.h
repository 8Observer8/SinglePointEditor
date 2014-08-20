#ifndef SCENEWINDOW_H
#define SCENEWINDOW_H

#include <QDialog>
#include "Color.h"

namespace Ui {
    class SceneWindow;
}

class SceneWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SceneWindow(QWidget *parent = 0);
    ~SceneWindow();

public slots:
    void slotSetBackgroundColor( const Color &color );

private:
    Ui::SceneWindow *ui;
};

#endif // SCENEWINDOW_H
