#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

using MessageContainer = std::vector<std::string>;

class Textbox
{
public:
    Textbox();
    Textbox(int visible, int charSize, int width, sf::Vector2f screenPosition);
    ~Textbox();

    void setup(int visible, int charSize, int width, sf::Vector2f screenPosition);
    void add(std::string message);
    void clear();

    void render(sf::RenderWindow& window);
private:
    MessageContainer messages;
    int visible;

    sf::RectangleShape backdrop;
    sf::Font font;
    sf::Text content;
};

#endif
