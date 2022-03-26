#include <stdio.h>

int main(void)
{
    int number = 100;
    for(int line = 1; line <= number; line++)
    {
        //if (linha % 15 == 0) printf("FooBaa %i\n", linha);
        //else if (linha % 3 == 0) printf("Foo %i\n", linha);
        //else if (linha % 5 == 0) printf("Baa %i\n", linha);
        //else printf("%i\n", linha);

        (line % 15 == 0) ? printf("FooBaa\n") : (line % 3 == 0) ? printf("Foo\n") : (line % 5 == 0) ? printf("Baa\n") : printf("%i\n", line);
    }

}