#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

    /******************************************************************************************************
    *  checkTime
    *  Diese Funktion erh�lt eine Zeit vom Typ TTime und gibt eine ganze Zahl(Wahrheitswert) zur�ck.
    *  Parameter: Zeit: Zeit die �berpr�ft wird
    *  Ergebnis : Ein Wahrheitswert 1 f�r Wahr und 0 f�r Unwahr
    ******************************************************************************************************/
    int checkTime(TTime Zeit);

    /******************************************************************************************************
    *  getTime
    *  Gibt die Aufforderung auf dem Bildschirm aus. Wartet auf die Eingabe einer Zeit im Format h:m:s oder m:s.
    *  Filtert aus der Eingabe Stunde, Minute und Sekunde raus und speichert sie als Dauer.
    *  Parameter:   Aufforderung: Eingabeaufforderung die auf dem Bildschirm ausgebene wird.
    *               Dauer: Zeiger des types TTime wo die Dauer gespeichert werden soll.
    *  Ergebnis : keins
    ******************************************************************************************************/
    void getTime(char Aufforderung[], TTime* Dauer);

    /******************************************************************************************************
    *  printTime
    *  Diese Funktion erh�lt eine Zeit vom Typ TTime und gibt diese im Format hh:mm:ss auf dem Bildschirm aus.
    *  Parameter:   Zeit: Zeit die Ausgegeben wird
    *  Ergebnis : keins
    ******************************************************************************************************/
    void printTime(TTime Zeit);

#endif // TIME_H_INCLUDED
