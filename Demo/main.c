#include <stdio.h>
#include <stdlib.h>
#include "toupper.h"

int main()
{
    char string1[] = "Hey Buddy!";
    printf("The original string: %s\n", string1);
    ToUppercase(string1);
    printf("After calling ToUppercase(string1): %s\n", string1);
    return 0;
}
