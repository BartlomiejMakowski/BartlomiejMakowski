#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>


using namespace std;

void menu()
{
cout<<"-------Witamy w kalkulatorze-------"<<endl;
cout<<"1-Dodawanie"<<endl;
cout<<"2-Odejmowanie"<<endl;
cout<<"3-Mnozenie"<<endl;
cout<<"4-Dzielenie"<<endl;
cout<<"5-Zakoncz program"<<endl;
}

void dodawanie()
{
 int a;
    int b;
    int c;
    cout<<"Podaj pierwsza liczbe"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe"<<endl;
    cin>>b;
 c = b + a;
    cout<<"Twoje dzialanie to:"<<a<<"+"<<b<<"=" <<a+b <<endl;

}

void odejmowanie()
{
 int a;
    int b;
    int c;
    cout<<"Podaj pierwsza liczbe"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe"<<endl;
    cin>>b;
 c = b - a;
    cout<<"Twoje dzialanie to:"<<a<<"-"<<b<<"=" <<a-b <<endl;

}
void mnozenie()
{
 int a;
    int b;
    int c;
    cout<<"Podaj pierwsza liczbe"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe"<<endl;
    cin>>b;
 c = b * a;
    cout<<"Twoje dzialanie to:"<<a<<"*"<<b<<"=" <<a*b <<endl;

}
void dzielenie()
{
 double a;
    double b;
    double c;

    cout<<"Podaj pierwsza liczbe"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe"<<endl;
    cin>>b;
    if(a==0 || b==0){
        cout<<"Nie dzielimy przez 0"<<endl;
   } else{
 c = a / b;
//  printf_s("%.2f",c);
  cout<<"Twoje dzialanie to:"<<a<<"/"<<b<<"=" << c <<endl;
}
}
int main(){

char opcja;


    while(opcja!='5'){
   menu();     opcja=getch();

  switch(opcja)
  {
case '1':
    dodawanie();
    break;
case '2':
    odejmowanie();
    break;
    case '3':
        mnozenie();
        break;
    case '4':
        dzielenie();
        break;
    case '5':
        exit(0);
        break;
    default: cout<<"Wybierz dobra odp"<<endl;
//getchar();
//system(cls);
  }

}

    return 0;
}
