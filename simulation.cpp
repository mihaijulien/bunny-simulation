#include "simulation.h"
#include "helper.h"
#include <QDebug>

std::vector<QString> bunnyNames = {
    "Hopper", "Thumper", "Whiskers", "Baxter", "Roger",
    "Midnight", "Dawn", "Daisy", "Beatrix", "Dolly",
    "Twilight", "Pearl", "Ruby", "Diamond", "Misty",
    "Snowflake", "Daisy", "Rose", "Moose", "Bear",
    "Summer", "Autumn", "Mars", "Jupiter", "Venus",
    "Darth Maul", "Julius Caesar"
};

Simulation::Simulation()
{
    for(int i=0; i<5; i++)
    {
        this->population.push_back(Bunny(getRandomName(bunnyNames), getRandomSex(), getRandomColor(), 0, randomRadioactiveMutant()));
    }
}

void Simulation::clear()
{
    this->population.clear();
}

void Simulation::display()
{
    for(std::vector<Bunny>::iterator it = population.begin(); it != population.end(); ++it)
    {
        qInfo()<<"Bunny "<<it->getName()<<" was born!";
    }
}

void Simulation::run()
{

}

void Simulation::breed()
{
    if(bunnyCount() >= 1)
    {

    }
}

int Simulation::bunnyCount()
{
    return this->population.size();
}
