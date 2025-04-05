#include <map>
#include <string>
#include <iostream>
#include "FileHandler.hpp"
#include "Visuals.hpp"
#include <SFML/Graphics.hpp>

using namespace std;

int main() {
    
    FileHandler fileHandler;
    fileHandler.ReadFromTxtFileToMap("txt/Descriptions.txt");
    cout << fileHandler.GetMapByKey(1) << endl;
    fileHandler.ClearTheMap();
    return 0;

    Visuals visuals;
    sf::Window window = visuals.RenderWindow(800,600);    

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
    }
}