#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <fig.h>
#include <draw.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    Drawer_Deleter *drawer;
    Representer* representer;
    void paintEvent(QPaintEvent* paint_event);
    void mousePressEvent(QMouseEvent* mouse_event);
};

#endif // MAINWINDOW_H
