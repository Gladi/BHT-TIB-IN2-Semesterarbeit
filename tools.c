#include <stdio.h>
#include "tools.h"
#include <stdlib.h>
#include <string.h>

void clearBuffer()
{
   char Dummy;

   do
      scanf("%c", &Dummy);
   while(Dummy != '\n');
}

int waitForEnter()
{
    char Dummy;

    printf("\nZum fortfahren Eingabetaste druecken...\n");

    do
        scanf("%c", &Dummy);
    while(Dummy != '\n');

    return 1;
}

void printLine(char Zeichen, int Anzahl)
{
    int i = 0;

    for(i = 0; i < Anzahl; i++)
        printf("%c", Zeichen);
    printf("\n");

}

int getText(char *Aufforderung, int Laenge, int emptyString, char **Eingabe)
{
    char *Input;
    int InputErg = 0;
    char Format[20];

    *Eingabe = NULL;
    Input = calloc(Laenge + 1, sizeof(char));

    if(Input)
    {
        sprintf(Format, "%%%i[^\n]", Laenge);

        if(!emptyString)
        {

            do
            {
                 printf(Aufforderung);
                 InputErg = scanf(Format, Input);
                 clearBuffer();

                 if(InputErg)
                 {
                     *Eingabe = malloc(strlen(Input + 1));
                     strcpy(*Eingabe, Input);
                  }

            }while(!InputErg);

        }
        else
        {
                 printf(Aufforderung);
                 InputErg = scanf(Format, Input);
                 clearBuffer();
                 *Eingabe = malloc(strlen(Input + 1));
                 strcpy(*Eingabe, Input);

        }

        free(Input);
        return 1;
    }

    printf("Nicht genuegend Speicher vorhanden");

    return 0;
}

void getNumber(char *Aufforderung, int **Eingabe, int von, int bis)
{
    int number = 0;
    int pruefen = 0;
    do
    {
        printf(Aufforderung);
        pruefen = scanf("%i" , &number);
        *Eingabe = number;
        clearBuffer();


    }while(!pruefen &&( number >= von && number <= bis));
}

void getTime(char *Aufforderung, int **Eingabe)
{
    char Input[20];

    scanf("%&[0123456789:]");

}

