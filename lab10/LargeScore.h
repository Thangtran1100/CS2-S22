#ifndef LARGESCORE_H
#define LARGESCORE_H
#include <exception>
using namespace std;

class LargeScore : public exception
{
private:
    int score; // To hold test score

public:
    // Constructor
    LargeScore(int);

    // Accessor function
    int getScore();
};
#endif