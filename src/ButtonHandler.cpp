#include "ButtonHandler.hpp"
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include "Button.hpp"
#include "Visuals.hpp"

using namespace std;

Visuals visuals(window);

void ButtonHandler::CreateButton(float position_x, float position_y, float width, float height, std::string uniqueIdentifier) {
    
    sf:: ConvexShape convexShape = visuals.DrawButton(position_x, position_y, width, height);
    Button button(*this, uniqueIdentifier, convexShape);
    this->AddToButtonVector(button);

}

void ButtonHandler::AddToButtonVector(Button buttonToAdd) {
    buttonsRendered.push_back(buttonToAdd);
}

vector<Button> ButtonHandler::GetButtonVector() {
    return buttonsRendered;
}

void ButtonHandler::ClearTheButtonVector() {
    buttonsRendered.clear();
}