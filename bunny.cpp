#include "bunny.h"
#include <QDebug>

Bunny::Bunny(QString name, SEX sex, COLOR color, int age, bool isRadioactiveVampireMutant)
{
    this->name = name;
    this->sex = sex;
    this->color = color;
    this->age = age;
    this->isRadioactiveVampireMutant = isRadioactiveVampireMutant;
}

Bunny::~Bunny()
{
    qInfo()<<"Bunny "<< this->name <<" died!";
}

QString Bunny::getName() const
{
 return name;
}

void Bunny::setName(const QString &newName)
{
    name = newName;
}

Bunny::SEX Bunny::getSex() const
{
    return sex;
}

void Bunny::setSex(SEX Sex)
{
    this->sex = sex;
}

Bunny::COLOR Bunny::getColor() const
{
    return color;
}

void Bunny::setColor(COLOR color)
{
    this->color = color;
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
