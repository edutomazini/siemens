#include <stdio.h>
#include <string.h>

const char* ConcatRemove (char *s, char *t, int k)
{
    int movSaved = 0;
    int lenS = (int)strlen(s);
    int lenT = (int)strlen(t);
    int moves = lenS + lenT; // if i have to remove all and concat all
    // int movConcat = 0;
    // int movRemove = 0;

    if (k >= moves) // allways be possible to make
        return "yes";
    else
        for(int i = 0; i < (lenS <= lenT ? lenS : lenT ); i++) // loop through minor string
        {
            if (s[i] == t[i]) // quantity of saved moves
                movSaved++;
            else
                break;
        };

    // movRemove = lenS - movSaved;
    // movConcat = lenT - movSaved;
    // moves = movRemove + movConcat;

    moves = lenS + lenT - 2*movSaved; // moves necessary

    if (k >= moves)
        if ((moves % 2 == 0 && k % 2 == 0) || (moves % 2 != 0 && k % 2 != 0)) // k and moves need to be even or odd respectively
            return "yes";
        else
            return "no";
    else
        return "no";
}

int main(void)
{
    char *s="blablabla";
    char *t="bl";
    int k=9;

    printf("%s\n",ConcatRemove(s,t,k));
}