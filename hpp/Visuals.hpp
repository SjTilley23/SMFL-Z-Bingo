#ifndef __GRAPHICS_HPP_INCLUDED__
#define __GRAPHICS_HPP_INCLUDED__

#include <SFML/Graphics.hpp>
#include <vector>

class Visuals {
    private:
        uint32_t width;
        uint32_t height;
        // std::vector<ButtonHandler> buttonVector;

    public:
        sf::RenderWindow& window;
        Visuals(sf::RenderWindow& window);
        Visuals(sf::RenderWindow& window, uint32_t widthi, uint32_t heighti);
        void RenderWindow();
        sf::ConvexShape DrawButton(float position_x, float position_y, float width, float height);
};
#endif // __GRAPHICS_HPP_INCLUDED__