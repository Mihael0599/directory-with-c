#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
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

void showPhoneNumbers(char numbers[100][100])
{
    printf("Hier sind die gespeicherten Telefonnummern:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("(%d) %s\n", i + 1, numbers[i]);
    }
}

void addPhoneNumber(char numbers[100][100], int nextIndex)
{
    printf("(1) Neue Nummer hinzufügen\n");
    char newNumber[100];
    printf("Bitte geben Sie die neue Telefonnummer ein: ");
    scanf("%s", newNumber);
    strcpy(numbers[nextIndex], newNumber);
    nextIndex++;
    showPhoneNumbers(numbers);
}
