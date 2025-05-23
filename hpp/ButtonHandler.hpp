#ifndef __BUTTONHANDLER_HPP_INCLUDED__
#define __BUTTONHANDLER_HPP_INCLUDED__

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/ConvexShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <vector>
#include <string>
#include <iostream>
#include "Visuals.hpp"
#include <tuple>
#include "FileHandler.hpp"






class RandomButtons {

    private:
        Visuals& visuals;                   // Visuals reference object
        const int width;                    // Unchangeable width of the button
        const int height;                   // Unchangeable height of the button
        const int x;                        // Unchangeable x coord value of the button
        const int y;                        // Unchangeable y coord value of the button
        const int uniqueIdentifier;         // Unique identifier for the button
        const int y_offset;                 // Button's text y offset
        const std::string text;             // Text written on the button
        const int fontSize;                 // Size of the button's text
        sf::ConvexShape buttonShape;        // Button's shape for use to get .globalRect()

    public:
        RandomButtons(Visuals& visuals, int widthi, int heighti, int xi, 
            int yi, int uniqueIdentifier, std::string texti, int y_offseti, int fontSizei); // ButtonHandler's non-default constructor
        std::tuple<std::string, std::string, std::string> IsPressed();
        bool Contains(sf::Vector2f mouseVec2f);
};

#endif // __BUTTONHANDLER_HPP_INCLUDED__ 