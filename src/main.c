#include "BlackB.h"
#include "BlackK.h"
#include "BlackN.h"
#include "BlackP.h"
#include "BlackQ.h"
#include "BlackR.h"
#include "Print.h"
#include "StartDesk.h"
#include "WhiteB.h"
#include "WhiteK.h"
#include "WhiteN.h"
#include "WhiteP.h"
#include "WhiteQ.h"
#include "WhiteR.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Desk[9][9], Str[10], Desk1[9][9];
    int n = 9, i, j, k = 3, d1 = 0, t = 0, f = 0;
    StartDesk(Desk, n);
    PrintMas(Desk, n);
    while (1) {
        if (k % 2 == 1) {
            printf("White Turn\n");

            scanf("%s", Str);

            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    Desk1[i][j] = Desk[i][j];
                }
            }

            for (i = 1; i < n; i++)
                if (Str[0] == Desk[8][i])
                    t = i;

            d1 = 8 - (Str[1] - 48);

            if (Desk[d1][t] == 'R') {
                WhiteR(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'N') {
                WhiteN(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'B') {
                WhiteB(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'Q') {
                WhiteQ(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'K') {
                WhiteK(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'P') {
                WhiteP(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }

            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    if (Desk1[i][j] != Desk[i][j]) {
                        f++;
                    }
                }
            }
            if (f > 0)
                k++;
            for (i = 0; i < n; i++)
                Str[i] = '\0';
            if (f == 0) {
                printf("Incorrect turn\n");
                PrintMas(Desk, n);
            }
            f = 0;
        }
        if (k % 2 == 0) {
            printf("Black Turn\n");
            scanf("%s", Str);

            if (Str[5] != '\0')
                continue;
            f = 0;
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    Desk1[i][j] = Desk[i][j];
                }
            }

            for (i = 1; i < n; i++)
                if (Str[0] == Desk[8][i])
                    t = i;

            d1 = 8 - (Str[1] - 48);

            if (Desk[d1][t] == 'r') {
                BlackR(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'n') {
                BlackN(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'b') {
                BlackB(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'q') {
                BlackQ(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'k') {
                BlackK(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            if (Desk[d1][t] == 'p') {
                BlackP(Desk, n, Str);
                PrintMas(Desk, n);
                printf("\n");
            }
            for (i = 0; i < 8; i++) {
                for (j = 1; j < 9; j++) {
                    if (Desk1[i][j] != Desk[i][j]) {
                        f++;
                    }
                }
            }
            if (f > 0)
                k++;
            if (f == 0) {
                printf("Incorrect turn\n");
                PrintMas(Desk, n);
            }
            f = 0;
            for (i = 0; i < n; i++)
                Str[i] = '\0';
        }
    }
    return 0;
}
