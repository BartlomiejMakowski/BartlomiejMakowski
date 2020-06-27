
#include <iostream>
#pragma once
#include <string>
#include "punkty.h"
using namespace std;
int kwadrat::k_numberOfPoints=0;
kwadrat::kwadrat()
{
kname="noname";
centerX = 0;
centerY = 0;
kwadrat::k_numberOfPoints++;
}

kwadrat::kwadrat(const string name, double x, double y)
{
kname=name;
centerX=x;
centerY=y;
kwadrat::k_numberOfPoints++;
}

kwadrat::~kwadrat()
{
    kwadrat::k_numberOfPoints--;
    }

void    kwadrat::setname(const string name){


        kname=name;
    }
void kwadrat::setpoints(const double x, double y)
{
    centerX=x;
    centerY=y;
}

double kwadrat::getX()
{
    return centerX;
}

double kwadrat::getY()
{
    return centerY;
}

void kwadrat::show()
{
    cout<<"Twoj punkt:"<<kname<<"("<<centerX<<","<<centerY<<")"<<endl;
}

int kwadrat::numberOfPoints()
{
    return kwadrat::k_numberOfPoints;
}
double kwadrat::ob(const kwadrat& p)
{
    double d;
//double ob = k1.centerX - k2.centerX;
//}
//double kwadrat::ob(const kwadrat& p) const {

  d=(p.centerX - centerX);// */ (p.centerX - centerX) + (p.m_y - m_y) * (p.m_y - m_y));
 //return sqrt}
}

/*int kwadrat::wybor()
{
    int a;
    cout<<"Czy chcesz usun¹æ jeden punkt?(1-TAK 2-NIE)"<<endl;
    cin>>a;
    if(a=1)
    {
        points[1].~kwadrat();
    }
    return kwadrat::kwadrat();


}*/

/*
kwadrat operator+(kwadrat a, kwadrat b)//operator dodawania wektorow
{
    double centerX, centerY;
    centerX = a.getX() + b.getX();
    centerY = a.getY() + b.getY();
    kwadrat v = kwadrat(centerX, centerY);
    return v;
}

kwadrat operator-(kwadrat a, kwadrat b)
{
    double centerX, centerY;
    centerX = a.getX() - b.getX();
    centerY = a.getY() - b.getY();
    kwadrat v = kwadrat(centerX, centerY);
    return v;
}/*   TUTAJ WSZYSTKO MOZE DZIALAC TYLKO NAZWEE TRZEBBA USUNAC*/
