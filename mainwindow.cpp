#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
    QObject::connect(ui->progressBar, SIGNAL(valueChanged(int)),ui->labelPr,SLOT(setNum(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
