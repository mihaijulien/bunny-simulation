#ifndef BUNNY_H
#define BUNNY_H

#include <QString>

class Bunny
{
public:
    enum SEX{
        male, female
    };
    enum COLOR {
        white, brown, black, spotted
    };

    explicit Bunny(QString name = "", SEX sex = male, COLOR color = white, int age = 0, bool isRadioactiveVampireMutant = false);
    ~Bunny();
    int getAge() const;
    void setAge(int age);
    bool getRadioactive() const;
    void setRadioactive(bool radioactive);
    void incrementAge();
    QString getName() const;
    void setName(const QString &newName);
    SEX getSex() const;
    void setSex(SEX newSex);

    COLOR getColor() const;
    void setColor(COLOR newColor);

private:
    int age;
    bool isRadioactiveVampireMutant;
    SEX sex;
    COLOR color;
    QString name;
};

#endif // BUNNY_H
