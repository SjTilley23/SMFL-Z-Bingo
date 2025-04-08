#ifndef __BUTTON_HPP_INCLUDED__
#define __BUTTON_HPP_INCLUDED__
#include <SFML/Graphics.hpp>

class ButtonHandler;

class Button {

    private:
        ButtonHandler & buttonHandler;
        std::string uniqueIdentifier;
        sf::ConvexShape convexShape;

    public:
        Button(ButtonHandler & buttonHandler_, std::string uniqueIdentifier, sf::ConvexShape convexShape) : buttonHandler(buttonHandler_) { };
        bool IsPressed(buttonHandler);
}


#endif __BUTTON_HPP_INCLUDED__