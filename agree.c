#include <stdio.h>
#include "cs50.h"
int main(void)
{
    char c = get_char("Do yo agreed ? \n");

    if (c == 'y' || c == 'Y')
    {
        printf("I agreed! \n");
    }
    else if (c == 'x' || c == 'X')
    {
        printf("I disagreeddd! \n");
    }
}