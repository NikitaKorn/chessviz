#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void WhiteN(char Desk[][9], int n, char Str[10])
{
    int i, t, t1, d1, d2;
    for (i = 1; i < n; i++)
        if (Str[0] == Desk[8][i])
            t = i;

    for (i = 1; i < n; i++)
        if (Str[3] == Desk[8][i])
            t1 = i;

    d1 = 8 - (Str[1] - 48);
    d2 = 8 - (Str[4] - 48);
    if (d2 > 9 || d2 < 0) {
        printf("Incncorrect turn\n");
    } else {
        Desk[d1][t] = '\0';
        Desk[d2][t1] = 'N';
    }
}
