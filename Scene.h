#ifndef SCENE_H
#define SCENE_H

#include <QGLWidget>
#include <QGLShaderProgram>
#include "Color.h"

class Scene : public QGLWidget
{
public:
    Scene( QWidget *widget = 0 );

    void setBackgroundColor( const Color &color );

protected:
    void initializeGL();
    void paintGL();
    void resizeGL( int w, int h );

private:
    void initShaders();
    QGLShaderProgram *m_program;
};

#endif // SCENE_H
