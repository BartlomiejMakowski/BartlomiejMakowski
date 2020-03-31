#include <iostream>
#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_tab(int* tab_a, int* tab_b, int liczba_elementow_do_zamiany = 1)
{
    for (int i = 0; i <= liczba_elementow_do_zamiany; i++)
    {
        int temp = tab_a[i];
        tab_a[i] = tab_b[i];
        tab_b[i] = temp;
    }
}
void swap_tab_wsk(int* tab_a, int* tab_b, int liczba_elementow_do_zamiany = 1)
{
    for (int i = 0; i <= liczba_elementow_do_zamiany; i++)
    {
        int temp = *(tab_a + i);
        *(tab_a + i) = *(tab_b + i);
        *(tab_b + i) = temp;
    }
}

void wys_tab(int* tab_c)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", tab_c[i]);
    }
}

int main(void)
{
    printf_s("Program testujacy funkcje swap()\n");
    setlocale(LC_ALL, "pl_PL");
    int a = 2, b = 5;
    
    printf_s("Wartosci zmiennych przed uzyciem funkcji swap()\n");
    printf_s("a = %d\n", a);
    printf_s("b = %d\n", b);
    printf_s("\n");
    swap(&a, &b);
    printf_s("Wartosci zmiennych po uzyciu funkcji swap()\n");
    printf_s("a = %d\n", a);
    printf_s("b = %d\n", b);

    int tab_a[5] = { 2,4,6,8,10 };
    int tab_b[5] = { 3,5,9,15,22 };

    printf_s("Program testujacy funkcje  swap_tab\n");
    printf("\n");

    printf("Wartosci zmiennych przed uzyciem funkcji swap_tab:\n");
    wys_tab(tab_a);
    printf(" - Tab a \n");
    wys_tab(tab_b);
    printf(" - Tab b \n");

    printf("Teraz wywołanie swap_tab\n");
    swap_tab(tab_a, tab_b, 3);
    printf("Po wywołaniu swap_tab\n");

    printf("Wartosci zmiennych po uzyciu funkcji swap_tab:\n");
    wys_tab(tab_a);
    printf(" - Tab a \n");
    wys_tab(tab_b);
    printf(" - Tab b \n");

    printf("Wartosci w tablicach przed uzyciem  swap_tab_wsk:\n");
    wys_tab(tab_a);
    printf(" - Tab a \n");
    wys_tab(tab_b);
    printf(" - Tab b \n");

    printf("Teraz wywołanie swap_tab_wsk\n");
    swap_tab_wsk(tab_a, tab_b, 4);
    printf("Wartosci w tablicach po  uzyciu  swap_tab:\n");
    wys_tab(tab_a);
    printf(" - Tab a \n");
    wys_tab(tab_b);
    printf(" - Tab b \n");

    return 0;
}