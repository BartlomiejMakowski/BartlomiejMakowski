﻿// Kalkulator.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <iostream>
#include <stdio.h>
FILE* fptr;
  void dodawanie()
    {
        int a;
        int b;
        int wynik;
        printf_s("Podaj liczbe pierwsza oraz druga\n"); 
        fptr = fopen("log.txt", "a");
        if (fptr == 0)
        {
            printf_s("Blad odczytu pliku\n");
        }
        scanf_s("%d\n %d", &a, &b);
        wynik = a + b;
        fprintf(fptr, "Wynik dodawnia %d + %d = %d\n",a,b, wynik);
         fclose(fptr);
         printf_s("Wynik dodawnia wynosi:%d\n", wynik);
    }
  

    void odejmowanie()
    {
        int a;
        int b;
        int wynik;
        printf_s("Podaj liczbe pierwsza oraz druga\n");
        fptr = fopen("log.txt", "a");
        if (fptr == 0)
        {
            printf_s("Blad odczytu pliku\n");
        }
        scanf_s("%d\n %d", &a, &b);
        wynik = a * b;
        fprintf(fptr, "Wynik dodawnia %d - %d = %d\n", a, b, wynik);
        fclose(fptr);
        printf_s("Wynik odejmowania wynosi:%d\n", wynik);

    }
    void mnozenie()
    {
        int a;
        int b;
        int wynik;
        printf_s("Podaj liczbe pierwsza oraz druga\n");
        fptr = fopen("log.txt", "a");
        if (fptr == 0)
        {
            printf_s("Blad odczytu pliku\n");
        }
        scanf_s("%d\n %d", &a, &b);
        wynik = a * b;
        fprintf(fptr, "Wynik dodawnia %d * %d = %d\n", a, b, wynik);
        fclose(fptr);
        printf_s("Wynik mnozenia wynosi:%d\n", wynik);

    }
    void dzielenie()
    {
        
        float a;
        float b;
       
        float wynik;
        printf_s("Podaj liczbe pierwsza oraz druga(wynik bedzie podany z dwoma liczbami po przecinku)\n");   
        fptr = fopen("log.txt", "a");
        if (fptr == 0)
        {
            printf_s("Blad odczytu pliku\n");
        }
        scanf_s("%f\n %f", &a, &b);
        wynik = a / b;
        fprintf(fptr, "Wynik dodawnia %d / %d = %d\n", a, b, wynik);
        fclose(fptr);
        printf_s("Wynik mnozenia wynosi:%.2f\n", wynik);

    }
  

    void menu()
    {
                printf_s("--------------Historia twoich dzialan zapisana bedzie w log.txt--------------\n");
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
               
                break;
            
            default:
                printf_s("\n \n Wybierz poprawna opcje\n \n ");
                    break;
            } 
        }

            return 0;
}        

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
