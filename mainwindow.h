#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
   // void resizeEvent(QResizeEvent *);

private:
    Ui::MainWindow *ui;
    QWebEngineView* m_pWebView;    // QWebView对象

private slots:
    //void onPageLoadFinished(bool);    // 地图加载完毕槽函数

public slots:
   // void onMapClickCallback();    // 点击地图时槽函数，必须是public的

};

#endif // MAINWINDOW_H
