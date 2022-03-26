
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>


char* ConcatRemove (char *s, char *t, int k)
{
    int movSaved = 0;
    int lenS = (int)strlen(s);
    int lenT = (int)strlen(t);
    int moves = lenS + lenT; // if i have to remove all and concat all

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

    moves = lenS + lenT - 2*movSaved; // moves necessary

    if (k >= moves)
        if ((moves % 2 == 0 && k % 2 == 0) || (moves % 2 != 0 && k % 2 != 0)) // k and moves need to be even or odd respectively
            return "yes";
        else
            return "no";
    else
        return "no";
}

/* commented for proposed of the unit test
int main(void)
{
    char *s="blablablabla";
    char *t="blablabcde";
    int k=8;

    printf("s='%s'\n",s);
    printf("t='%s'\n",t);
    printf("k=%i\n",k);
    printf("%s\n",ConcatRemove(s,t,k));

    s="tab";
    t="tab";
    k=7;

    printf("s='%s'\n",s);
    printf("t='%s'\n",t);
    printf("k=%i\n",k);
    printf("%s\n",ConcatRemove(s,t,k));
}
*/