#include <stdio.h>
#include "datastructure.h"
#include "menu.h"
#include <stdlib.h>
#include "tools.h"

int getMenu(char *Titel, char *Optionen[], int Anzahl)
{
    int i = 0;
    int Wahl = 0;

    do
    {
        system("CLS");
        printf("%s\n", Titel);
        printLine('=', 30);
        printf("\n");

        for(i = 0; i < Anzahl; i++)
        {
            printf("%i. %s \n",(i+1), *(Optionen + i));
        }

        printf("\nIhre Wahl: ");
        scanf("%i", &Wahl);
        clearBuffer();

    }while((Wahl < 1 )||( Wahl > Anzahl));

    return Wahl;

}
