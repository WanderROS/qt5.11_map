#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileInfo>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_pWebView = new QWebEngineView(this);
    m_pWebView->load(QUrl("http://www.baidu.com/"));
    ui->verticalLayout->addWidget(m_pWebView);
    m_pWebView->show();

   /* QFile file("/Users/wander/Desktop/qt_web/web_map/index.html");
    file.open(QIODevice::ReadOnly);
    QTextStream out(&file);
    QString output_file = out.readAll();
    ui->widget->setHtml(output_file);
*/

    QFileInfo file("/Users/wander/Desktop/qt_web/web_map/index.html");
    QString url = "file:///";
    url += file.absoluteFilePath();
    ui->widget->setUrl(QUrl(url));

}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::resizeEvent(QResizeEvent *)
{
    m_pWebView->resize(this->size());
}
*/
