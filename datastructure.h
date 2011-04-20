#ifndef DATASTRUCTURE_H_INCLUDED
#define DATASTRUCTURE_H_INCLUDED

#define MAXSONGS  30
#define MAXCDS 100

typedef struct
{
    int Stunden;
    int Minuten;
    int Sekunden;
}TTime;

typedef struct
{
    char *Titel;
    char *Interpret;
    TTime Dauer;
}TSong;

typedef struct
{
    char *Titel;
    char *Interpret;
    int gleicherInterpret;
    int Erscheinungsjahr;
    int AnzahlSongs;
    TSong Lied[MAXSONGS];
}TCD;

extern int CountCDs;
extern TCD CDData[];


#endif // DATASTRUCTURE_H_INCLUDED
