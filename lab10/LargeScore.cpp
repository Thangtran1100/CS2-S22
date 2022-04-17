#include "LargeScore.h"

//*********************************************************
// The constructor accepts an interger as an argument *
//*********************************************************
LargeScore::LargeScore(int s) : exception()
{
    score = s;
}

//*********************************************************
// getScore function returns the testscore *
//*********************************************************
int LargeScore::getScore()
{
    return score;
}
