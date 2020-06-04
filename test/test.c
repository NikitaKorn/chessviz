#include "../src/BlackB.h"
#include "../src/BlackK.h"
#include "../src/BlackN.h"
#include "../src/BlackP.h"
#include "../src/StartDesk.h"
#include "../src/WhiteB.h"
#include "../src/WhiteK.h"
#include "../src/WhiteN.h"
#include "../src/WhiteP.h"
#include <ctest.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CTEST(White_Pawn, Correct_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[5][1] = 'P';

    char Str[] = "a2-a3";

    char Desk[9][9];
    StartDesk(Desk, 9);
    WhiteP(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[5][1], Desk[5][1]);
}

CTEST(White_Pawn, InCorrect_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[6][1] = 'P';

    char Str[] = "a2-a9";

    char Desk[9][9];
    StartDesk(Desk, 9);
    WhiteP(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[6][1], Desk[6][1]);
}

CTEST(Black_Pawn, Correct_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[2][2] = 'p';

    char Str[] = "b7-b6";

    char Desk[9][9];
    StartDesk(Desk, 9);
    BlackP(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[2][2], Desk[2][2]);
}

CTEST(Black_Pawn, InCorrect_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[6][1] = 'P';

    char Str[] = "a2-a9";

    char Desk[9][9];
    StartDesk(Desk, 9);
    BlackP(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[6][1], Desk[6][1]);
}

CTEST(White_Bishop, Correct_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[5][5] = 'B';

    char Str[] = "c1-e3";

    char Desk[9][9];
    StartDesk(Desk, 9);
    WhiteB(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[5][5], Desk[5][5]);
}

CTEST(White_Bishop, InCorrect_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[6][1] = 'P';

    char Str[] = "a2-a9";

    char Desk[9][9];
    StartDesk(Desk, 9);
    WhiteB(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[6][1], Desk[6][1]);
}

CTEST(Black_Bishop, Correct_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[2][1] = 'b';

    char Str[] = "c8-a6";

    char Desk[9][9];
    StartDesk(Desk, 9);
    BlackB(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[2][1], Desk[2][1]);
}

CTEST(Black_Bishop, InCorrect_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[6][1] = 'P';

    char Str[] = "a2-a9";

    char Desk[9][9];
    StartDesk(Desk, 9);
    BlackB(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[6][1], Desk[6][1]);
}

CTEST(White_King, Correct_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[5][5] = 'K';

    char Str[] = "e1-e3";

    char Desk[9][9];
    StartDesk(Desk, 9);
    WhiteK(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[5][5], Desk[5][5]);
}

CTEST(White_King, InCorrect_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[6][1] = 'P';

    char Str[] = "a2-a9";

    char Desk[9][9];
    StartDesk(Desk, 9);
    WhiteB(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[6][1], Desk[6][1]);
}

CTEST(Black_King, Correct_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[2][4] = 'k';

    char Str[] = "e8-d6";

    char Desk[9][9];
    StartDesk(Desk, 9);
    BlackK(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[2][4], Desk[2][4]);
}

CTEST(Black_King, InCorrect_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[6][1] = 'P';

    char Str[] = "a2-a9";

    char Desk[9][9];
    StartDesk(Desk, 9);
    WhiteB(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[6][1], Desk[6][1]);
}

CTEST(White_Knight, Correct_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[5][1] = 'N';

    char Str[] = "b1-a3";

    char Desk[9][9];
    StartDesk(Desk, 9);
    WhiteN(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[5][1], Desk[5][1]);
}

CTEST(White_Knight, InCorrect_Turn_Num1)
{
    char DeskCorrect[9][9];
    DeskCorrect[7][2] = 'N';

    char Str[] = "b1-b9";

    char Desk[9][9];
    StartDesk(Desk, 9);
    WhiteN(Desk, 9, Str);

    ASSERT_EQUAL(DeskCorrect[7][2], Desk[7][2]);
}