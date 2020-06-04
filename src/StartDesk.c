#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void StartDesk(char Desk[][9], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            Desk[i][j] = '\0';

    Desk[0][0] = '8';
    Desk[0][1] = 'r';
    Desk[0][2] = 'n';
    Desk[0][3] = 'b';
    Desk[0][4] = 'q';
    Desk[0][5] = 'k';
    Desk[0][6] = 'b';
    Desk[0][7] = 'n';
    Desk[0][8] = 'r';
    Desk[1][0] = '7';
    Desk[1][1] = 'p';
    Desk[1][2] = 'p';
    Desk[1][3] = 'p';
    Desk[1][4] = 'p';
    Desk[1][5] = 'p';
    Desk[1][6] = 'p';
    Desk[1][7] = 'p';
    Desk[1][8] = 'p';
    Desk[2][0] = '6';
    Desk[3][0] = '5';
    Desk[4][0] = '4';
    Desk[5][0] = '3';
    Desk[6][0] = '2';
    Desk[6][1] = 'P';
    Desk[6][2] = 'P';
    Desk[6][3] = 'P';
    Desk[6][4] = 'P';
    Desk[6][5] = 'P';
    Desk[6][6] = 'P';
    Desk[6][7] = 'P';
    Desk[6][8] = 'P';
    Desk[7][0] = '1';
    Desk[7][1] = 'R';
    Desk[7][2] = 'N';
    Desk[7][3] = 'B';
    Desk[7][4] = 'Q';
    Desk[7][5] = 'K';
    Desk[7][6] = 'B';
    Desk[7][7] = 'N';
    Desk[7][8] = 'R';
    Desk[8][1] = 'a';
    Desk[8][2] = 'b';
    Desk[8][3] = 'c';
    Desk[8][4] = 'd';
    Desk[8][5] = 'e';
    Desk[8][6] = 'f';
    Desk[8][7] = 'g';
    Desk[8][8] = 'h';
}
