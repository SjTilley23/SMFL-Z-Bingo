#ifndef __GRAPHICS_HPP_INCLUDED__
#define __GRAPHICS_HPP_INCLUDED__

#include <SFML/Graphics.hpp>

class Visuals {
    private:
    sf::RenderWindow & window;

    public:
        Visuals(sf::RenderWindow & window_) : window(window_) { };
        sf::RenderWindow RenderWindow(uint32_t width, uint32_t height);
        sf::FloatRect DrawButton(float position_x, float position_y, float width, float height);
};
#endif // __GRAPHICS_HPP_INCLUDED__