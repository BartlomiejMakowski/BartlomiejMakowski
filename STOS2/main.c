#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
#include <windows.h>
#include "funckje.h"
//int rozmiar;
int main()
{
int wybor;
//tab();
rozmiar=0;

while(wybor!=6){
//tab();
printf("\n");
menu();
 scanf("%d",&wybor);
  // printf("\n");
  system("CLS");
switch(wybor)
{
case 1:
    push();
    break;

case 2:
    top();
    break;
case 3:
    pop();
    break;
case 4:
    empty();
    break;
/*&case 5:
    tab();
    break;*/
    case 6:
    exit(1);
default:
    printf("\nNie ma takiej opcji.\n\n");
    break;
}

}

  return 0;

}

