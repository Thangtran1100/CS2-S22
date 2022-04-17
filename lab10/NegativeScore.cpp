#include "NegativeScore.h"

//*********************************************************
// The constructor accepts an interger as an argument *
//*********************************************************
NegativeScore::NegativeScore(int s) : exception()
{
    score = s;
}

//*********************************************************
// getScore function returns the testscore *
//*********************************************************
int NegativeScore::getScore()
{
    return score;
}