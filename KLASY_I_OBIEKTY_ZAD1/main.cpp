#include <iostream>
#pragma once
#include <string>
#include "punkty.h"
#include <cmath>
using namespace std;

int main()
{
    int a;
   // kwadrat points[4] ={
    kwadrat k1("P_LD",1,1);//LD-Lewy dolny
    kwadrat k2("P_LG",1,4);//LD-Lewy górny
    kwadrat k3("P_PD",6,1);//PD-Prawy dolny
    kwadrat k4("P_PG",6,4);//PD-Prawy górny
    //};
    cout<<"Aktualna ilosc punktow: "<<kwadrat::numberOfPoints()<<endl;
    /*for(int i =0; i<4;i++){
    points[i].show();*/
     k1.show();
      k2.show();
       k3.show();
       k4.show();
         // int a;
   cout<<"Czy chcesz usunac pierwszy punkt?(1-TAK 2-NIE)"<<endl;
    cin>>a;
    if(a==1)
    {
        k1.~kwadrat();
    }

        cout<<"Aktualna ilosc punktow: "<<kwadrat::numberOfPoints()<<endl;
        //cout<<"TUTAJ:"<<kwadrat::ob;
          //for(int i =0; i<4;i++){
    //points[i].show();}
   // cout << "Hello world!" << endl;*/

  //kwadrat  k5 = k1 - k2;
    return 0;
}
