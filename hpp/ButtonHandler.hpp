#ifndef __BUTTONHANDLER_HPP_INCLUDED__
#define __BUTTONHANDLER_HPP_INCLUDED__

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <iostream>
#include "Visuals.hpp"

class ButtonHandler {

    private:
        Visuals& visuals;                   // Visuals reference object
        const std::string uniqueIdentifier; // Unchangeable string to identify the button
        const int width;                    // Unchangeable width of the button
        const int height;                   // Unchangeable height of the button
        const int x;                        // Unchangeable x coord value of the button
        const int y;                        // Unchangeable y coord value of the button

    public:
        ButtonHandler(Visuals& visuals, int widthi, int heighti, int xi, 
            int yi, std::string uniqueIdentifieri); // ButtonHandler's non-default constructor
};




#endif // __BUTTONHANDLER_HPP_INCLUDED__ 