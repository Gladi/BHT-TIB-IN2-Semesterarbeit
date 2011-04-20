#include <stdio.h>
#include "cds.h"
#include "datastructure.h"
#include "menu.h"
#include "time.h"
#include "tools.h"

int main()
{
    char *title = "CD-Verwaltung Deluxe";
    char *options[7] = {"Neue CD erstellen", "CD bearbeiten", "CD loeschen", "Suchen", "Soriteren", "Auflisten", "Programm beenden"};
    int menu;

    do
    {
        menu = getMenu(title, options, 7);

        switch(menu)
        {
            case 1: createCD();   break;
            case 2: editCD();     break;
            case 3: deleteCD();   break;
            case 4: searchSong(); break;
            case 5: sortCDs();    break;
            case 6: listCDs();    break;
            case 7: return 0;     break;
        }



    }while(waitForEnter());

    return 0;
}
