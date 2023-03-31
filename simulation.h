#ifndef COLONY_H
#define COLONY_H

#include <vector>
#include "bunny.h"

class Simulation
{
private:
    std::vector<Bunny> population;
public:
    explicit Simulation();
    void clear();
    void display();
    void run();
    void breed();
    int bunnyCount();
};

#endif // COLONY_H
