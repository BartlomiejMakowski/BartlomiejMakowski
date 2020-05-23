#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <string>
#include <iostream>
#include <stdio.h>

void dodawanie()
{
    int a;
    int b;
    int wynik;
    printf_s("Podaj liczbę pierwsza oraz druga(Po przecinku)\n");
    scanf_s("%d, %d", &a, &b);
    wynik = a + b;
    printf_s("Wynik dodawnia wynosi:%d\n", wynik);

}

void odejmowanie()
{
    int a;
    int b;
    int wynik;
    printf_s("Podaj liczbę pierwsza oraz druga(Po przecinku)\n");
    scanf_s("%d, %d", &a, &b);
     wynik = a - b ;
    printf_s("Wynik odejmowania wynosi:%d\n", wynik);

}
void mnozenie()
{
    int a;
    int b;
    int wynik;
   printf_s("Podaj liczbę pierwsza oraz druga(Po przecinku)\n");
    scanf_s("%d, %d", &a, &b);
     wynik = a * b;
    printf_s("Wynik mnozenia wynosi:%d\n", wynik);

}
void dzielenie()
{
    float a;
    float b;
    float wynik;
    printf_s("Podaj liczbę pierwsza oraz druga(Po przecinku)\n");
    scanf_s("%f, %f", &a, &b);
    wynik = a / b;
    printf_s("Wynik mnozenia wynosi:%.2f\n", wynik);

}


void menu() {

    printf_s("\n");
    printf_s("Wybierz dzialanie jakie chcesz wykonac\n");
    printf_s("1-Dodawanie\n");
    printf_s("2-Odejmowanie\n");
    printf_s("3-Mnozenie\n");
    printf_s("4-Dzielenie\n");
    printf_s("5-Koniec programu\n");
}




int main(void)
{
    char opcja = 0;
    while (opcja != '5')
    {
        
        menu();
        opcja = _getch();
        switch (opcja)
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
        default: printf_s("\nWybierz dobra odp\n");

        }


}


        return 0;
    
}
