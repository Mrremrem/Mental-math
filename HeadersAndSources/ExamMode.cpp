#include "ExamMode.h"

ExamMode::ExamMode(Textbox* log)
{
    this->log = log;
}

void ExamMode::start()
{
    log->add("2 + 2 = ");

}

void render(sf::RenderWindow& window)
{

}

