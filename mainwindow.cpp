#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mascotSrc(new QPixmap(":/Anke_2200px.jpg")) {
    ui->setupUi(this);
    ui->centralWidget->setLayout(ui->verticalLayout);
    ui->scrollAreaWidgetContents->setLayout(ui->verticalLayout_2);
    ui->lineEdit->setText(QString::fromLatin1(QByteArray::fromStdString("test1")));
    syncBackground();
}

void MainWindow::syncBackground() {
    QPixmap bkgnd = mascotSrc->scaled(this->size(), Qt::KeepAspectRatioByExpanding);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

MainWindow::~MainWindow() {
    delete mascotSrc;
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event) {
    syncBackground();
    QWidget::resizeEvent(event);
}

