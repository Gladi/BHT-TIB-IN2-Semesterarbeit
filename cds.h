#ifndef CDS_H_INCLUDED
#define CDS_H_INCLUDED CDS_H_INCLUDED

    /******************************************************************************************************
    *  createCD
    *  Funktion zur Eingabe neuer CDs in der Datenbank.
    *  Fordert den Benutzer auf Titel, Interpret, Erscheinungsjahr und Anzahl der Lieder einzugeben.
    *  Lieder werden über eine Schleife von createSong hinzugefuegt.
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void createCD();


    /******************************************************************************************************
    *  editCD
    *
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void editCD();


    /******************************************************************************************************
    *  deleteCD
    *
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void deleteCD();


    /******************************************************************************************************
    *  createSong
    *  Fordert den Benutzer auf Titel, Interpret und Dauer für ein Lied einzugeben.
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void createSong();


    /******************************************************************************************************
    *  editSong
    *
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void editSong();


    /******************************************************************************************************
    *  deleteSong
    *
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void deleteSong();


    /******************************************************************************************************
    *  searchSong
    *
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void searchSong();


    /******************************************************************************************************
    *  sortCDs
    *
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void sortCDs();


    /******************************************************************************************************
    *  listCDs
    *  Ruft in einer Schleife fuer alle CDs die Funktion listOneCD auf.
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void listCDs();

    /******************************************************************************************************
    *  listOneCD
    *  Gibt die Daten einer CD auf dem Bildschirm aus.
    *  Ruft die Funktion listOneSong auf um die Daten eines Liedes in einer Zeile auszugeben.
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void listOneCD();

    /******************************************************************************************************
    *  listOneSong
    *  Gibt die Daten eines Liedes auf dem Bildschirm aus.
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void listOneSong();

#endif // CDS_H_INCLUDED
