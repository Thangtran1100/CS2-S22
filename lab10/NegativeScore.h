#ifndef NEGATIVESCORE_H
#define NEGATIVESCORE_H
#include <exception>
using namespace std;

class NegativeScore : public exception
{
private:
    int score; // To hold test score

public:
    // Constructor
    NegativeScore(int);

    // Accessor function
    int getScore();
};
#endif