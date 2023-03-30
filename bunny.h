#ifndef BUNNY_H
#define BUNNY_H

#include <string>

class Bunny
{
public:
    enum SEX{
        male, female
    };
    enum COLOR {
        white, brown, black, spotted
    };

    explicit Bunny(std::string name = "", SEX sex = male, COLOR color = white, int age = 0, bool isRadioactiveVampireMutant = false);
    ~Bunny();
    int getAge() const;
    void setAge(int age);
    bool getRadioactive() const;
    void setRadioactive(bool radioactive);
    void incrementAge();
    std::string getName() const;
    void setName(const std::string &newName);
    SEX getSex() const;
    void setSex(SEX newSex);

    COLOR getColor() const;
    void setColor(COLOR newColor);

private:
    int age;
    bool isRadioactiveVampireMutant;
    SEX sex;
    COLOR color;
    std::string name;
};

#endif // BUNNY_H

