#include <stdio.h>

int myLength(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; ++i);
    return i;
}

char* myReverse(char word[])
{
    int len=myLength(word);
    for (int i=0;i<len/2;i++)
    {
        //swap arrays integer codes, like to use matrix slot as an aux value.
        word[i]       = word[i] + word[len-i-1];
        word[len-i-1] = word[i] - word[len-i-1];
        word[i]       = word[i] - word[len-i-1];
    }
    return word;
}

int main(void) {
    char s[] = "Siemens is the best";

    printf("Reverse of the string is: %s\n", myReverse(s));
    return 0;
}