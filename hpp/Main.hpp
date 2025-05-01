#ifndef __MAIN_HPP_INCLUDED__
#define __MAIN_HPP_INCLUDED__

#include <tuple>
#include <utility>
#include <vector>
#include <string>
#include <iostream>
#include "FileHandler.hpp"
#include "Visuals.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "ButtonHandler.hpp"
#include <sstream>

/*
This program uses a switch/case statement to decide which screen to
render at the current moment. This takes an integer as input.
Here is the number to screen correspondence. See the obsidian
notes for more info on what screen is what.


0 - Starting Screen
1 - Main screen
2 - Bingo screen
*/




class main {
    private:
         std::vector<RandomButtons> randButVec;
         int currentScreen = 1;
         std::tuple<std::string, std::string, std::string> mapChallengeDescTuple;

    public:
        main(std::tuple<std::string, std::string, std::string> mapChallengeDescTuplei = 
            {"N/A", "N/A", "N/A"}): mapChallengeDescTuple(mapChallengeDescTuplei) {};
        void addToRBV(RandomButtons buttonToAdd);
        int getRBVSize();
        RandomButtons getFromRBV(int index);
        void clearRBV();
        int getCurrentScreen();
        void setCurrentScreen(int screenNumber);
        void setMapCDTuple(std::tuple<std::string, std::string, std::string> mapCPair);
        std::tuple<std::string, std::string, std::string> getMapCDTuple();
};



#endif //__MAIN_HPP_INCLUDED__