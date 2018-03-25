#include <stdio.h>
#include <stdlib.h>
#include "toupper.h"

int main()
{
    char string1[] = "Hey Buddy!";
    ToUppercase(string1);
    printf("%s\n", string1);
    return 0;
}
