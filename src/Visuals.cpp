#include <SFML/Graphics.hpp>
#include "Visuals.hpp"

sf::Window Visuals::RenderWindow(uint32_t width, uint32_t height) {
    sf::Window window(
        sf::VideoMode({width, height}), "My Window", sf::Style::Default, sf::State::Windowed);

    return window;
}