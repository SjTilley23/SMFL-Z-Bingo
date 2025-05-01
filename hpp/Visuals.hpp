#ifndef __GRAPHICS_HPP_INCLUDED__
#define __GRAPHICS_HPP_INCLUDED__

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/ConvexShape.hpp>
#include <cstdint>
#include <vector>

class Visuals {
    private:
        uint32_t width;   // Width variable for use with buttons
        uint32_t height;  // Height variable for use with buttons
        sf::Font font;    // empty Font object used for button text
        sf::ConvexShape setButtonVertices(float position_x, float position_y, float height, float width, sf::ConvexShape buttonShape);

    public:
        sf::RenderWindow& window;           // reference to a ReferenceWindow object

        Visuals(sf::RenderWindow& window);                                      // First of three constructors for just a window reference
        Visuals(sf::RenderWindow& window, uint32_t widthi, uint32_t heighti);   // Second constructor for window reference, width, and height
        void RenderWindow();
        sf::ConvexShape DrawButton(float position_x, float position_y, float width, 
            float height, std::string text, int y_offset, int fontSize); // Draws a button on screen and returns the convex shape of it
        void WriteText(std::string textToWrite, float position_x, float position_y, int fontSize);
        std::string TextWrapConverter(std::string textToConvert);
};
#endif // __GRAPHICS_HPP_INCLUDED__