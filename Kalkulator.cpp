#include <iostream>
#include <stdio.h>

void dodawanie()
{
    int a;
    int b;
    int wynik;
     printf_s("Podaj liczbę pierwsza oraz druga\n");
     scanf_s("%d, %d" & a, &b);
         a + b = wynik;
         printf_s("Wynik dodawnia wynosi:%d\n",wynik);

}

void odejmowanie()
{
    int a;
    int b;
    int wynik;
    printf_s("Podaj liczbę pierwsza oraz druga\n");
    scanf_s("%d, %d" & a, &b);
    a - b = wynik;
    printf_s("Wynik odejmowania wynosi:%d\n", wynik);

}
void mnozenie()
{
    int a;
    int b;
    int wynik;
    printf_s("Podaj liczbę pierwsza oraz druga\n");
    scanf_s("%d, %d" & a, &b);
    a * b = wynik;
    printf_s("Wynik mnozenia wynosi:%d\n", wynik);

}
void dzielenie()
{
    int a;
    int b;
    float wynik;
    printf_s("Podaj liczbę pierwsza oraz druga(wynik bedzie podany z dwoma liczbami po przecinku)\n");
    scanf_s("%d, %d" & a, &b);
    a / b = wynik;
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
    while (opcja != '5')
    {
        menu();
        opcja = _getch();
        switch (opcja)
        {
        case '1':
            dodawanie();
            break;
             
            
        }





    return 0;
}