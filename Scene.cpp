
#include <QOpenGLVertexArrayObject>
#include "Scene.h"

Scene::Scene( QWidget *widget ) :
    QGLWidget( widget )
{
    m_program = new QGLShaderProgram( this );
}

void Scene::setBackgroundColor(const Color &color)
{
    GLclampf red = static_cast<GLclampf>( color.getRed() );
    GLclampf green = static_cast<GLclampf>(color.getGreen() );
    GLclampf blue = static_cast<GLclampf>( color.getBlue() );
    glClearColor( red, green, blue, 1.0f );
    updateGL();
}

void Scene::initializeGL()
{
    glClearColor( 1.0f, 0.0f, 0.0f, 1.0f );
    initShaders();
}

void Scene::paintGL()
{
    glClear( GL_COLOR_BUFFER_BIT );
    glPointSize( 50.f );
    glDrawArrays( GL_POINTS, 0, 1 );
}

void Scene::resizeGL(int w, int h)
{
    glViewport( 0, 0, w, h );
}

void Scene::initShaders()
{
    // Compile vertex shader
    m_program->addShaderFromSourceFile( QGLShader::Vertex, ":/vshader.glsl" );

    // Compile fragment shader
    m_program->addShaderFromSourceFile( QGLShader::Fragment, ":/fshader.glsl" );

    // Bind vertex array object
    QOpenGLVertexArrayObject *vao = new QOpenGLVertexArrayObject( this );
    vao->bind();

    // Bind shader pipeline for use
    m_program->bind();
}
