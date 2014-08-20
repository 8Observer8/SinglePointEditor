#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_sceneWindow = new SceneWindow;
    m_controlWindow = new ControlWindow;

    ui->mdiArea->addSubWindow( m_sceneWindow );
    ui->mdiArea->addSubWindow( m_controlWindow );

    connect( m_controlWindow, SIGNAL( signalSetBackgroundColor(Color) ),
             m_sceneWindow, SLOT( slotSetBackgroundColor(Color) ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}
