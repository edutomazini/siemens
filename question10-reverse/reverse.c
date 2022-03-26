#include <stdio.h>

int myLength(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; ++i);
    return i;
}

void myReverse (char *s)
{
    int start = 0;
    int end = myLength(s);
    if(*s)
	{
		myReverse(s + 1);
		printf("%c", *s);
	}
}

int main(void) {
    char s[] = "Siemens is the best";

    printf("Reverse of the string '%s' is: '", s);
    myReverse(s);
    printf("'\n");

    return 0;
}