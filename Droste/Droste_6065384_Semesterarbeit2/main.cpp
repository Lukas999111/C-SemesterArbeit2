#include <QApplication>
#include "game.h"

//Lukas Droste
//6065384
//Ich habe alleine gearbeitet und die erste Stufe der Semesterarbeit erreicht

Game * game;

int main(int argc, char *argv[])
{
    //Spiel ausführen
    QApplication a(argc, argv);
    game = new Game();
    game->show();
    return a.exec();
}

