#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include<QPainter>
#include<QDebug>
#include<QString>
#include<QTimer>
#include<QKeyEvent>
#include<QDialog>
#include"mary.h"
#include"brick.h"
#include"unknown.h"
#include"mushroom.h"
#include"master.h"
#include"pipe.h"
#include"gamepause.h"
#include"mypushbutton.h"
#include"fire.h"
#include"castle.h"

class GameScene : public QWidget {
    Q_OBJECT

public:
    explicit GameScene(QWidget *parent = nullptr);

    int timer1;
    int timer2;
    int timer3;
    bool is_kill_timer2;
    bool game_start;
    float time;
    int score;
    bool is_press_x;
    bool is_win;
    QString key;
    Mary *mary;
    Brick *brick;
    Pipe *pipe;
    Unknown *unknown;
    MushRoom *mushroom;
    GamePause *Pause;
    Master *master;
    Fire *fire;
    Castle *castle;

    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void timerEvent(QTimerEvent *event);
    void Game_Init();

    void Die_Init();

    void Pause_Init();

    void Pause_Game_Init();

    void Fall_Down(int &y);

    void Jump_Collision();
    void Move_Collision();
    void Game_Win();

    signals:
private:

};

#endif // GAMESCENE_H
