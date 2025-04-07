#include <map>
#include <string>
#include <iostream>
#include "FileHandler.hpp"
#include "Visuals.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;

int main() {
    
    sf::Vector2f mouseVec2f;

    sf::RenderWindow window(
        sf::VideoMode({400, 600}), "My Window", 
            sf::Style::Default, sf::State::Windowed);

    Visuals visuals(window);
    window.setFramerateLimit(60);  // Set the framerate to 60



    // While the window is open
    while (window.isOpen()) {  


        // Every loop we check for an event using a while loop incase there are multiple.
        while (const auto event = window.pollEvent()) {   
            
            if (event->is<sf::Event::Closed>()) {   // If the event is a close event
                window.close();                     // Close the window

            }

            if (event->is<sf::Event::MouseButtonPressed>()) {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {

                    mouseVec2f = static_cast<sf::Vector2f>(sf::Mouse::getPosition(window));
                }
            }




        }

        window.clear();   // Clear everything drawn from last frame


        sf::FloatRect randomMapButton = visuals.DrawButton(10, 70, 100, 30);


        if (randomMapButton.contains(mouseVec2f)) {
            cout << "Testing" << endl;
            mouseVec2f.x = 0;
            mouseVec2f.y = 0;
        }


        window.display(); // Display everything drawn this frame
    }

    return 0;
}