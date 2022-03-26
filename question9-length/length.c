#include <stdio.h>

int myLength(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; ++i);
    return i;
}

int main(void) {
    char *s = "Siemens is the best";

    printf("Length of the string '%s' is: %i\n", s, myLength(s));
    return 0;
}