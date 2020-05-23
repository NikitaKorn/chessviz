#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void PrintMas(char Desk[][9], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (Desk[i][j] == 0) {
                printf("  ");
            } else {
                printf("%c ", Desk[i][j]);
            }
        }
        printf("\n");
    }
}
