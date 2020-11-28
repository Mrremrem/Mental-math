#ifndef EXAMMODE_H
#define EXAMMODE_H

#include <SFML/Graphics.hpp>
#include "MathFunctions.h"
#include "Score.h"
#include "Textbox.h"

class ExamMode
{
public:
    ExamMode(Textbox* log);
    ~ExamMode() {}

    void start();
    void render(sf::RenderWindow& window);
private:
    MathFunctions math;
    Score score;
    Textbox* log;
};


#endif
