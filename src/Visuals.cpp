#include <SFML/Graphics.hpp>
#include "Visuals.hpp"

sf::RenderWindow Visuals::RenderWindow(uint32_t width, uint32_t height) {
    sf::RenderWindow window(
        sf::VideoMode({width, height}), "My Window", sf::Style::Default, sf::State::Windowed);

    return window;
}


