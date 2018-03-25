#include "toupper.h"

void ToUppercase(char *str)
{
    while(*(str++))
    {
        if(*str >= 'a' && *str <= 'z')
            *str = *str - 'a' + 'A';
    }
}

