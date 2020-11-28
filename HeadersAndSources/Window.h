#ifndef WINDOW_H
#define WINDOW_H

#include <cstring>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Window
{
public:
    Window();
    Window(const std::string title, const sf::Vector2u& size);
    ~Window();

    void beginDraw();
    void endDraw();

    void update();

    bool isDone();
    bool isFullScreen();

    sf::RenderWindow* getRenderWindow();
    sf::Vector2u getWindowSize();

    void toggleFullscreen();

    void draw(sf::Drawable &drawable);

    sf::Event getEvent() { return event; }
private:
    void setup(const std::string title, const sf::Vector2u& size);
    void create();
    void destroy();

    sf::RenderWindow window;
    sf::Vector2u windowSize;
    std::string windowTitle;
    sf::Event event;

    bool done;
    bool fullscreen;
};


#endif
