#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<qimage.h>
#include<qpainter.h>
#include<qcolor.h>
extern "C" {
#pragma comment (lib, "avcodec.lib")
#pragma comment (lib, "avdevice.lib")
#pragma comment (lib, "avfilter.lib")
#pragma comment (lib, "avformat.lib")
#pragma comment (lib, "avutil.lib")
#pragma comment (lib, "swresample.lib")
#pragma comment (lib, "swscale.lib")
#include <libavutil/log.h>
#include<libavformat/avformat.h>
#include<libavutil/opt.h>
#include<libavcodec/avcodec.h>
#include<libswscale/swscale.h>
#include<libavutil/fifo.h>
#include<libswresample/swresample.h>
#include<libavutil/imgutils.h>
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent *event)override;

    QImage Image;

public slots:
    void ct_update_image(QImage img);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
