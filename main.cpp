/**
  * @file main.cpp
  * @brief main file
  * @author Bagrova Polina
  */
#include "player.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Player w;
    w.show();
    return a.exec();
}
