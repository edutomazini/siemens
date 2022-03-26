
#include <stdio.h>
#include <stdlib.h>

#include "minunit.h"
#include "../ex2/ex2.c"

int tests_run = 0;

static char *test_yes(void) {
    puts("=> test_yes") ;

    mu_assert("s='blablablabla'-t='blablabcde'-k=8-result='yes'", 0 == strcmp("yes",ConcatRemove("blablablabla","blablabcde",8)));
    mu_assert("s='tab'-t='tab'-k=7-result='yes'", 0 == strcmp("yes",ConcatRemove("tab","tab",7)));

    return 0;
}

static char *test_no(void) {
    puts("=> test_no");

    mu_assert("s='blablablabla'-t='blablabcde'-k=5-result='no'", 0 == strcmp("no",ConcatRemove("blablablabla","blablabcde",5)));
    mu_assert("s='tab'-t='tab'-k=3-result='no'", 0 == strcmp("no",ConcatRemove("tab","tab",3)));

    return 0;
}


static char *testes(void) {
    mu_run_test(test_yes);
    mu_run_test(test_no);

    return 0;
}

int main(void) {
    char *saida;

    saida = testes();

    if(0!=saida) {
        puts(saida);
        return EXIT_FAILURE;
    }

    puts("TESTS RUN SUCCESSFULLY");
    printf("Tests performed: %d\n", tests_run);

    return EXIT_SUCCESS;
}