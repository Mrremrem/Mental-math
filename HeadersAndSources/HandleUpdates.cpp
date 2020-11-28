#include "HandleUpdates.h"

HandleUpdates::HandleUpdates():
window("Mental Math", sf::Vector2u(800, 600)),
exam(&textbox)

{
    clock.restart();
    srand(time(nullptr));

    textbox.setup(5, 48, 350, sf::Vector2f(225, 0));
    elapsed = 0;

    exam.start();
}

void HandleUpdates::restartClock()
{
    elapsed += clock.restart().asSeconds();
}

void HandleUpdates::handleInput()
{
    // if keyboard is pressed, find the key and then add it to textbox.add()

    if (getWindow()->getEvent().type == sf::Event::TextEntered)
    {
        // checks if it's within ASCII range (0-127), is not a backspace (8), and is not enter (13)
        if (getWindow()->getEvent().text.unicode < 128 && getWindow()->getEvent().text.unicode != 8 && getWindow()->getEvent().text.unicode != 13)
        {
            std::string str;
            str += getWindow()->getEvent().text.unicode;
            textbox.add(str);
            //textbox.add(std::to_string(getWindow()->getEvent().text.unicode)); // debug
        }

        else if (getWindow()->getEvent().text.unicode == 13)
        {
            textbox.clear();
        }
    }
}

void HandleUpdates::update()
{
    window.update();
}

void HandleUpdates::render()
{
    window.beginDraw();

    textbox.render(*window.getRenderWindow());

    window.endDraw();
}
