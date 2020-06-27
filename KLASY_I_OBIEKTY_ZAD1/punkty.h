#include <iostream>
  #pragma once
#include <string>
using namespace std;

class kwadrat
{
private:
    static int k_numberOfPoints;
    string kname;
    double centerX;
    double centerY;
public:
     static int numberOfPoints();
     kwadrat();
    kwadrat(const string name, double x=0, double y=0);
    ~kwadrat();
    void setname(const string name);
    void setpoints(const double x, double y);
    double getX();
    double getY();
    void show();
    double ob(const kwadrat& p);
    void pol();
    int wybor();
    friend kwadrat operator+(kwadrat a, kwadrat b);//zwraca nowy wektor doddajac dwa wektory
    friend kwadrat operator-(kwadrat a, kwadrat b);
};


