#include <QCoreApplication>
#include <QDebug>
#include "simulation.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Simulation simulation;
    simulation.display();

    return a.exec();
}
