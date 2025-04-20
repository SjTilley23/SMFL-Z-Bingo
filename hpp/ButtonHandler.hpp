#ifndef __BUTTONHANDLER_HPP_INCLUDED__
#define __BUTTONHANDLER_HPP_INCLUDED__

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <iostream>
#include "Visuals.hpp"
#include "FileHandler.hpp"

class RandomButtons {

    private:
        Visuals& visuals;                   // Visuals reference object
        const int width;                    // Unchangeable width of the button
        const int height;                   // Unchangeable height of the button
        const int x;                        // Unchangeable x coord value of the button
        const int y;                        // Unchangeable y coord value of the button
        const int uniqueIdentifier;         // Unique identifier for the button
        sf::ConvexShape buttonShape;        // Button's shape for use to get .globalRect()

    public:
        RandomButtons(Visuals& visuals, int widthi, int heighti, int xi, 
            int yi, int uniqueIdentifier); // ButtonHandler's non-default constructor
        std::pair<std::string, std::string> IsPressed();
};

// class BackButtons {

//     private:
//     const int width;                    // Unchangeable width of the button
//     const int height;                   // Unchangeable height of the button
//     const int x;                        // Unchangeable x coord value of the button
//     const int y;                        // Unchangeable y coord value of the button
//     sf::ConvexShape buttonRect;         // Button's shape for use to get .globalRect()


// };


#endif // __BUTTONHANDLER_HPP_INCLUDED__ 