#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "functions.h"

int showMenu(void)
{
    int selection;
    printf("##### Herzlich willkommen ####\n");
    printf("(0) Telefonnummer anzeigen\n");
    printf("(1) Neue Nummer hinzufügen\n");
    scanf("%d", &selection);
    printf("\n\n");
    if (selection == 0 || selection == 1)
    {
        return selection;
    }
    else
    {
        printf("Ungültige Auswahl. Bitte erneut versuchen.\n");
        return showMenu();
    }
}

void showPhoneNumbers(char numbers[][100])
{
    printf("Hier sind die gespeicherten Telefonnummern:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", numbers[i]);
    }
    
    // Hier könnte der Code zum Anzeigen der Telefonnummern stehen
}

void addPhoneNumber()
{
    printf("(1) Neue Nummer hinzufügen\n");
}
