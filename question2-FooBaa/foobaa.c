#include <stdio.h>

int main(void)
{
    int number = 100;
    for(int line = 1; line <= number; line++)
        (line % 15 == 0) ? printf("FooBaa\n") : (line % 3 == 0) ? printf("Foo\n") : (line % 5 == 0) ? printf("Baa\n") : printf("%i\n", line);
}