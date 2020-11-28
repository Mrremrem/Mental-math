#ifndef HANDLEUPDATES_H
#define HANDLEUPDATES_H

#include "Window.h"
#include "ExamMode.h"
#include "Textbox.h"

class HandleUpdates
{
public:
    HandleUpdates();
    ~HandleUpdates() {};

    void handleInput();
    void update();
    void render();

    sf::Time getElapsed() { return clock.getElapsedTime(); };
    void restartClock();

    Window* getWindow() { return &window; }
private:
    Window window;
    sf::Clock clock;
    float elapsed;

    ExamMode exam;
    Textbox textbox;
};

#endif
