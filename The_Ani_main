#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <string>
#include "Animal.h"
using namespace std;
extern char choice2, choice, choice3;
extern int day, junk_food, health_food;
extern int drug;
extern int money;
extern int degree, water, cola, education1, education2, education3;
int main()
{
    cout<<"Welcome to The Ani"<<endl;
    Sleep(1000);
    system("cls");
    cout<<"Select in Main Menu:"<<endl;
    cout<<"1.New Game - Press 1"<<endl;
    cout<<"2.Load Game - Press 2"<<endl;
    choice3=getch();
    system("cls");
    Animal A1;
    //Game
    fstream plik;
    switch(choice3)
    {
    case '1': //New Game
        plik.open("Save.txt",ios::out);
        A1.Difficult();
        A1.Name();
        plik.close();
    break;
    case '2': //Load Game
        plik.open("Save.txt",ios::in);
        if(plik.good()==false)
        {
            cout<<"Error 404 Not found file"<<endl;
        }
        string line;
        int nr_line=1;
        while(getline(plik,line))
        {
            switch(nr_line)
            {
                case 1: day=atoi(line.c_str()); break;
                case 2: money=atoi(line.c_str()); break;
                case 3: degree=atoi(line.c_str()); break;
                case 4: A1.name=line; break;
                case 5: A1.age=atoi(line.c_str()); break;
                case 6: A1.energy=atoi(line.c_str()); break;
                case 7: A1.hunger=atoi(line.c_str()); break;
                case 8: A1.health=atoi(line.c_str()); break;
                case 9: A1.thirst=atoi(line.c_str()); break;
                case 10: A1.happyness=atoi(line.c_str()); break;
                case 11: A1.depression=atoi(line.c_str()); break;
                case 12: junk_food=atoi(line.c_str()); break;
                case 13: health_food=atoi(line.c_str()); break;
                case 14: water=atoi(line.c_str()); break;
                case 15: cola=atoi(line.c_str()); break;
                case 16: drug=atoi(line.c_str()); break;
                case 17: education1=atoi(line.c_str()); break;
                case 18: education2=atoi(line.c_str()); break;
                case 19: education3=atoi(line.c_str()); break;
            }
            nr_line++;
        }
        plik.close();
    break;
//    default:
   // system("cls");
  //  cout<<"Error 404, Not found"<<endl;
  //  Sleep(1000);
 //   break;
    }
    //Game start
    for(;;)
    {
    A1.Display();
    choice=getch();
    switch(choice)
    {
    case '1':
    if(health_food>0)
    {
    A1.Eathealth();
    health_food--;
    }
    else
    {
        system("cls");
        cout<<"Lack of this type of food"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case '2':
    if(junk_food>0)
    {
    A1.Eatjunk();
    junk_food--;
    }
    else
    {
        system("cls");
        cout<<"Lack of this type of food"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case '3':
    A1.Sliip();
    break;
    case '4':
    if(drug>0)
    {
    A1.Heal();
    }
    else
    {
        system("cls");
        cout<<"Lack of this thing"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case '5':
    A1.Play_active();
    break;
    case '6':
    A1.Play_static();
    break;
    case '7':
    A1.Educate();
    break;
    case '8':
    A1.Shop();
    break;
    case '9':
    if(water>0)
    {
    A1.Drinkwater();
    }
    else
    {
        system("cls");
        cout<<"Lack of this thing"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case '0':
    if(cola>0)
    {
    A1.Drinkcola();
    }
    else
    {
        system("cls");
        cout<<"Lack of this thing"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case 'q':
    if(degree==0)
    {
    A1.Work0();
    }
    break;
    case 'w':
    if(degree>=1)
    {
    A1.Work1();
    }
    else
    {
        system("cls");
        cout<<"You cant work here without properly education, go educate!!!"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;

        getch();
    }
    break;
    case 'e':
    if(degree>=2)
    {
    A1.Work2();
    }
    else
    {
        system("cls");
        cout<<"You cant work here without properly education, go educate!!!"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;

        getch();
    }
    break;
    case 'r':
    if(degree>=3)
    {
    A1.Work3();
    }
    else
    {
        system("cls");
        cout<<"You cant work here without properly education, go educate!!!"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;

        getch();
    }
    break;
    case 'z':
        system("cls");
        cout<<"Thank you very much for playing"<<endl;
        Sleep(1000);
        cout<<"Author - Filip Bozym"<<endl;
        Sleep(2000);
        system("cls");
        exit(0);
    break;
    default:
        system("cls");
        cout<<"Error 404, Not found"<<endl;
        Sleep(1000);
        day--;

    break;
    }
    system("cls");
    A1.Circum1();
    A1.Circum2();
    A1.Circum3();
    A1.Circum4();
    day++;
    plik.open("Save.txt",ios::out);
    plik<<day<<endl; //int
    plik<<money<<endl; //int
    plik<<degree<<endl; //int
    plik<<A1.name<<endl; //string
    plik<<A1.age<<endl; //int
    plik<<A1.health<<endl; //int
    plik<<A1.hunger<<endl; //int
    plik<<A1.energy<<endl; //int
    plik<<A1.thirst<<endl; //int
    plik<<A1.happyness<<endl; //int
    plik<<A1.depression<<endl; //int
    plik<<junk_food<<endl; //int
    plik<<health_food<<endl; //int
    plik<<water<<endl; //int
    plik<<cola<<endl; //int
    plik<<drug<<endl; //int
    plik<<education1<<endl; //int
    plik<<education2<<endl; //int
    plik<<education3<<endl; //int
    plik<<" "<<endl;
    plik.close();
    }
    //Game stop
    return 0;
}
