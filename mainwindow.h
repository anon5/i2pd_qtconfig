#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    QPixmap* mascotSrc;
protected:
    void syncBackground();
    void resizeEvent(QResizeEvent *event) Q_DECL_OVERRIDE;
};

#endif // MAINWINDOW_H
