#include "Window.h"

Window::Window()
{
    setup("Window", sf::Vector2u(640, 480));
}

Window::Window(const std::string title, const sf::Vector2u& size)
{
    setup(title, size);
}

Window::~Window()
{
    destroy();
}

void Window::setup(const std::string windowTitle, const sf::Vector2u& windowSize)
{
    this->windowTitle = windowTitle;
    this->windowSize = windowSize;
    fullscreen = false;
    done = false;
    create();
}

void Window::create()
{
    auto style = (fullscreen ? sf::Style::Fullscreen : sf::Style::Default);
    window.create( {windowSize.x, windowSize.y, 32}, windowTitle, style); // look this up
}

void Window::destroy()
{
    window.close();
}

void Window::beginDraw()
{
    window.clear(sf::Color(16,16,16,255)); // using a dark gray background color
}

void Window::endDraw()
{
    window.display();
}

bool Window::isDone()
{
    return done;
}

bool Window::isFullScreen()
{
    return fullscreen;
}

sf::RenderWindow* Window::getRenderWindow()
{
    return &window;
}

void Window::toggleFullscreen()
{
    fullscreen = !fullscreen;
    window.close();
    create();
}

void Window::update()
{
    // sf::Event event; // might replace with a member variable
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            done = true;
        }

        else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
        {
            done = true;
        }

        else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::F5)
        {
            toggleFullscreen();
        }
    }
}
