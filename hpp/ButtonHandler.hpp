#ifndef __BUTTONHANDLER_HPP_INCLUDED__
#define __BUTTONHANDLER_HPP_INCLUDED__

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include "Visuals.hpp"

class Button;

class ButtonHandler {

    private:
    std::vector<Button> buttonsRendered;
    sf::RenderWindow & window;
    void AddToButtonVector(Button buttonToAdd);

    public:
    ButtonHandler(sf::RenderWindow & window_) : window(window_) { };
    void CreateButton(float position_x, float position_y, float width, float height, std::string uniqueIdentifier);
    std::vector<sf::FloatRect> GetButtonVector();
    void ClearTheButtonVector();

};




#endif // __BUTTONHANDLER_HPP_INCLUDED__ 