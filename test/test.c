#include <ctest.h>
#include "../src/StartDesk.h"
#include "../src/WhiteP.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CTEST(data_suite, figure_character)
{
	 char DeskCorrect[9][9];
	 DeskCorrect[5][1] = 'P';
   
        char Str[] = "a2-a3";
 
	char Desk[9][9];
	StartDesk(Desk, 9);
	 WhiteP(Desk, 9, Str);



    ASSERT_EQUAL(DeskCorrect[5][1], Desk[5][1]);
}

