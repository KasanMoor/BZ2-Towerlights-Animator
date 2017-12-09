#ifndef PREVIEW_H
#define PREVIEW_H

#include <QDialog>
#include <QString>
#include <QTime>
#include <QCoreApplication>
#include <QDebug>
#include <QUrl>
#include <QMediaPlayer>
#include "TanFile.h"
#include "thread.h"

namespace Ui {
class Preview;
}

class Preview : public QDialog
{
    Q_OBJECT

public:
    explicit Preview(TanFile project, QWidget *parent = 0);
    ~Preview();

private slots:
    void on_pushButton_close_clicked();
    void on_pushButton_play_clicked();
    void on_pushButton_back1_clicked();
    void on_pushButton_back10_clicked();
    void on_pushButton_forward1_clicked();
    void on_pushButton_forward10_clicked();
    void next_frame();

private:
    Ui::Preview *ui;
    TanFile file;
    QMediaPlayer *player;
    bool playing;
    myThread* t;
    void updateGUI();
    void playSong();
    void reject();
};

#endif // PREVIEW_H
