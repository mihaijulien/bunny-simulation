#ifndef HELPER_H
#define HELPER_H

#include <vector>
#include <QString>
#include <random>
#include <algorithm>
#include <ctime>
#include "bunny.h"

QString getRandomName(const std::vector<QString>& names)
{
    static std::default_random_engine rng{std::random_device{}()};
    return names[std::uniform_int_distribution<size_t>{0,names.size()-1}(rng)];
}

Bunny::SEX getRandomSex()
{
    std::srand(std::time(nullptr));
    return (rand() % 2 == 0) ? Bunny::male : Bunny::female;
}

Bunny::COLOR getRandomColor()
{
    std::srand(std::time(nullptr));
    return static_cast<Bunny::COLOR>(rand() % 4);
}

bool randomRadioactiveMutant()
{
    std::srand(std::time(nullptr));
    return std::rand() % 2 == 0;
}

#endif // HELPER_H

