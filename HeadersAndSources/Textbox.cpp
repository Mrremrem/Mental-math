#include "Textbox.h"

Textbox::Textbox()
{
    setup(5, 9, 200, sf::Vector2f(0, 0));
}

Textbox::Textbox(int visible, int charSize, int width, sf::Vector2f screenPosition)
{
    setup(visible, charSize, width, screenPosition);
}

Textbox::~Textbox()
{
    clear();
}

void Textbox::setup(int visible, int charSize, int width, sf::Vector2f screenPosition)
{
    this->visible = visible;

    sf::Vector2f offset(2.0f, 2.0f);

    // make CMake define the directory
    font.loadFromFile("NovaSquare-Regular.ttf");
    content.setFont(font);
    content.setString("");
    content.setCharacterSize(charSize);
    content.setFillColor(sf::Color::White);
    content.setPosition(screenPosition + offset);

    backdrop.setSize(sf::Vector2f(width, (visible * charSize * 1.2f)));
    backdrop.setFillColor(sf::Color(90, 90, 90, 90));
    backdrop.setPosition(screenPosition);
}

void Textbox::add(std::string message)
{
    messages.push_back(message);

    if (messages.size() < 10) { return; } // max characters in line

    messages.erase(messages.begin());
}

void Textbox::clear()
{
    messages.clear();
}

void Textbox::render(sf::RenderWindow &window)
{
    std::string content;

    for (auto &i : messages)
    {
        content.append(i);
    }

    if (content != "")
    {
        this->content.setString(content);
        window.draw(this->backdrop);
        window.draw(this->content);
    }
}
