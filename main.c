#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "functions.h"

int main(void)
{
    if (showMenu() == 0)
    {
        printf("Telefonnummer wird angezeigt...\n");
    }
    else
    {
        printf("Neue Nummer wird hinzugefügt...\n");
    }

    return 0;
}