#include <map>
#include <string>
#include <iostream>
#include "FileHandler.hpp"
#include "Visuals.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;

int main() {
    
    FileHandler fileHandler;
    fileHandler.ReadFromTxtFileToVec("txt/Descriptions.txt");
    cout << fileHandler.GetVecByIndex(1) << endl;
    fileHandler.ClearTheVec();

    Visuals visuals;
    sf::Window window = visuals.RenderWindow(400, 600);
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }



    }

    return 0;
}