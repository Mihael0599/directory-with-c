#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "functions.h"

int main(void)
{
    char phoneNumbers[10][100] = {
        "+4915112345678",
        "+4915112345679",
        "+4915112345680",
        "+4915112345681",
        "+4915112345682",
        "+4915112345683",
        "+4915112345684",
        "+4915112345685",
        "+4915112345686",
        "+4915112345687",
    };
    if (showMenu() == 0)
    {
        showPhoneNumbers(phoneNumbers);
    }
    else
    {
        addPhoneNumber();
    }

    return 0;
}