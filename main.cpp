#include "HandleUpdates.h"
#include "MathFunctions.h"
// #include <iostream> // for testing

int main()
{
    // MathFunctions math; // for testing
    HandleUpdates program;

    while (!program.getWindow()->isDone())
    {
        program.handleInput();
        program.update();
        program.render();
        program.restartClock();
    }
}
