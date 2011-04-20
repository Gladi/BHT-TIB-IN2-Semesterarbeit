#include <stdio.h>
#include <stdlib.h>
#include "datastructure.h"
#include "cds.h"
#include "tools.h"

int CountCDs = 0;
TCD CDData[MAXCDS];

void createCD()
{
    int counter = 0;

    system("CLS");
    printf("Erfassung einer neuen CD\n");
    printLine('-', 30);
    getText("Geben Sie bitte den Titel der CD ein:\n", 30, 0, &((CDData + CountCDs) -> Titel));
    getText("Geben Sie bitte den Interpreten ein:\n(dieses Feld leer lassen, wenn es sich um unterschiedliche Interpreten handelt)\n",30,1, &((CDData + CountCDs) -> Interpret));
    getNumber("Geben Sie bitte das Erscheinungsjahr ein:", &((CDData + CountCDs) -> Erscheinungsjahr), 1, 2020);
    getNumber("Geben Sie bitte die Anzahl der Lieder ein:", &((CDData + CountCDs) -> AnzahlSongs), 1, 50);

    do
    {
        getText("Bitte den Titel des Liedes eingeben:", 30, 0, &(((CDData + CountCDs) -> Lied) -> Titel));
        //if(!(CDData -> Interpret)) funzt noch nicht
        getText("Bitte den Interpreten des Liedes eingeben:", 30, 0, &(((CDData + CountCDs) -> Lied) -> Interpret));

        counter++;

    }while(counter < ((CDData + CountCDs) -> AnzahlSongs));

    clearBuffer();

}

void editCD()
{
    printf("editCD\n");
}

void deleteCD()
{
    printf("deleteCD\n");
}

void createSong()
{
    printf("createSong\n");
}

void editSong()
{
    printf("editSong\n");
}

void deleteSong()
{
    printf("deleteSong\n");
}

void searchSong()
{
    printf("searchSong\n");
}

void sortCDs()
{
    printf("sortCDs\n");
}

void listCDs()
{
    printf("listCDs\n");
}
