#include "bunny.h"
#include <iostream>

Bunny::Bunny(td::string name, SEX sex, COLOR color, int age, bool isRadioactiveVampireMutant)
{
    this->name = name;
    this->sex = sex;
    this->color = color;
    this->age = age;
    this->isRadioactiveVampireMutant = isRadioactiveVampireMutant;
}

Bunny::~Bunny()
{
    std::cout<<"Bunny "<< this->name <<" died!";
}

std::string Bunny::getName() const
{
 return name;
}

void Bunny::setName(const std::string &newName)
{
 name = newName;
}

int Bunny::getAge() const
{
    return age;
}

void Bunny::setAge(int age)
{
    this->age = age;
}

bool Bunny::getRadioactive() const
{
    return isRadioactiveVampireMutant;
}

void Bunny::setRadioactive(bool isRadioactiveVampireMutant)
{
    this->isRadioactiveVampireMutant = isRadioactiveVampireMutant;
}

void Bunny::incrementAge()
{
    this->age++;
}
