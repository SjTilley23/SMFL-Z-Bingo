#ifndef __BUTTONHANDLER_HPP_INCLUDED__
#define __BUTTONHANDLER_HPP_INCLUDED__

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <iostream>
#include "Visuals.hpp"

class ButtonHandler {

    private:
        Visuals& visuals;
        const std::string uniqueIdentifier;
        const int width;
        const int height;
        const int x;
        const int y;

    public:
        ButtonHandler(Visuals& visuals, int widthi, int heighti, int xi, int yi, std::string uniqueIdentifieri);
};




#endif // __BUTTONHANDLER_HPP_INCLUDED__ 