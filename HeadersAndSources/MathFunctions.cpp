#include "MathFunctions.h"

MathFunctions::MathFunctions()
{}

MathFunctions::~MathFunctions()
{}

unsigned MathFunctions::terms(int begin, int end, int difference)
{
    return (end - begin) / difference + 1;
}

unsigned MathFunctions::gcd(unsigned first, unsigned second)
{
    // checks if a zero was passed
    if (first == 0)
    {
        return second;
    }

    else if (second == 0)
    {
        return first;
    }

    // Swaps second number with first to make the first number larger by default
    if (first < second)
    {
        unsigned temp = second;
        second = first;
        first = temp;
    }

    unsigned remainder = first % second;

    // using recursion to make things easier
    return gcd(second, remainder);
}

unsigned MathFunctions::lcm(unsigned first, unsigned second)
{
    return first * second / gcd(first, second);
}

int MathFunctions::randomInt(int min, int max)
{
    return rand() % max + min;
}
