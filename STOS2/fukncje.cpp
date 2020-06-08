#include <stdio.h>
#include <stdlib.h>
int rozmiar,dane[6];

void push()
{
    if (rozmiar>=5){
            printf("STOS jest pelny\n");
    }
    else{
            printf("\nPodaj wartosc jaka chcesz wprowadzic: ");

    scanf("%d",&dane[rozmiar]);
rozmiar=rozmiar+1;

/*int a=4,b=2,wynik;
wynik =a/b
printf("%d",wynik)*/
    }
}
void pop()
{
if(rozmiar<1)
{
    printf("STOS jest pusty lub usunales juz wszystkie wartosci\n");
}
else
{
    printf("\nUsunales wartosc: %d ze stosu\n",dane[rozmiar-1]);
    rozmiar--;

}
}
void top()
{
if(rozmiar==0){
    printf("\nBrak wartosci szczytowej STOS jest pusty\n");
}
else
{
   printf("\nWartosc szczytowa to: %d",dane[rozmiar-1]);
}
}
void empty()
{
    if(rozmiar==0)
        {
        printf("\nSTOS jest pusty.\n");
    }
    else
    {
        printf("\nSTOS nie jest pusty.\n");
    }
}

/*void tab()
{
    printf("\nPoni¿ej liczby twojego stosu:\n");
    for(rozmiar; rozmiar<=5; rozmiar--)
{

        printf("\n%d\n",dane[rozmiar]);
    }
}*/
void menu()
{
printf("1-Poloz na STOS(PUSH)\n");
printf("2-Wartosc szczytowa STOSU(TOP)\n");
printf("3-Zdejmij ze STOSU(POP)\n");
printf("4-Czy STOS jest pusty?\n");
printf("5-Poka¿ liczby stosu\n");
printf("6-Zakoncz program\n");
printf("----------------------------------\n");
printf("\nWybor:");

}

