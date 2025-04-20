#ifndef __GRAPHICS_HPP_INCLUDED__
#define __GRAPHICS_HPP_INCLUDED__

#include <SFML/Graphics.hpp>
#include <vector>

class Visuals {
    private:
        uint32_t width;   // Width variable for use with buttons
        uint32_t height;  // Height variable for use with buttons
        sf::Font font;

    public:
        sf::RenderWindow& window;           // reference to a ReferenceWindow object

        Visuals(sf::RenderWindow& window);                                      // First of three constructors for just a window reference
        Visuals(sf::RenderWindow& window, uint32_t widthi, uint32_t heighti);   // Second constructor for window reference, width, and height
        void RenderWindow();

        sf::ConvexShape DrawButton(float position_x, float position_y, float width, 
            float height, std::string text); // Draws a button on screen and returns the convex shape of it
};
#endif // __GRAPHICS_HPP_INCLUDED__