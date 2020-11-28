#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H

/*
 * To do list:
 * Roman numerals to Arabic numerals
 */

#include <cstdlib>
#include <time.h>

class MathFunctions
{
public:
    MathFunctions();
    ~MathFunctions();

    /*
     * Returns the number of terms in a sequence. Here's an example:
     * 8 + 11 + 14 ... 35. The first term is eight, the second term
     * is 35, and the difference from 8 to 11 is five. The answer
     * is ten because there are then digits in between and including
     * 8 and 35.
     * @param   begin       The beggining of the sequence
     * @param   end         The end of the sequence
     * @param   difference  The difference of the sequence
     * @return              The number of terms
     */
    unsigned terms(int begin, int end, int difference);

    /*
     * Returns the greatest common denomenator of two numbers using
     * The Euclidean Algorithm. Both parameters can be any natural
     * number since the numbers will be automatically arranged.
     * @param   first       A natural number
     * @param   second      A natural number
     * @return              The greatest common denominator of the two numbers
     */
    unsigned gcd(unsigned first, unsigned second);

    /*
     * Returns the least common multiple of two numbers. Both
     * parameters can be any natural number since the numbers
     * will be automatically arranged.
     * @param   first       A natural number
     * @param   second      A natural number
     * @return              The least common multiple of the two numbers
     */
    unsigned lcm(unsigned first, unsigned second);

    /*
     * Returns a random number from min to max
     * @param   min         The minimum number to generate
     * @param   max         The Maximum number to generate
     * @return              A random number
     */
    int randomInt(int min, int max);
private:

};

#endif
