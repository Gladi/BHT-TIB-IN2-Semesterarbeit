#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

    /******************************************************************************************************
    *  getMenu
    *  Gibt ein Menuetitel sowie mehrer Menuepunkte auf dem Bildschirm aus und fragt den Benutzer nach einer Menuewahl.
    *  Parameter:   Titel, Optionen: Menuetitel sowie Menuepunkte die auf dem Bildschirm ausgegeben werden sollen.
    *               Anzahl: Anzahl der Menuepunkte.
    *  Ergebnis :   Gibt den gewählten Menuepunkt als Zahl zurueck.
    ******************************************************************************************************/
    int getMenu(char *Titel, char *Optionen[], int Anzahl);


#endif // MENU_H_INCLUDED
