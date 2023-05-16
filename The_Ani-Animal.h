#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <string>
using namespace std;
class Animal
{
public:
    string name;
    int health;
    int hunger;
    int energy;
    int happyness;
    int thirst;
    int depression=0;
    int age=1;
    void Eatjunk();
    void Eathealth();
    void Heal();
    void Work0();
    void Work1();
    void Work2();
    void Work3();
    void Shop();
    void Play_active();
    void Play_static();
    void Name();
    void Sliip();
    void Dead();
    void Display();
    void Circum1();
    void Circum2();
    void Circum3();
    void Circum4();
    void Drinkwater();
    void Drinkcola();
    void Educate();
    void Degrees();
    void Difficult();
    //void Play_The_Ani();
};
#endif // _ANIMAL_H
