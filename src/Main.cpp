#include <map>
#include <string>
#include <iostream>
#include "FileHandler.hpp"
#include "Visuals.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;

int main() {
    

    Visuals visuals;                                    // Create Visuals object
    sf::RenderWindow window = visuals.RenderWindow(400, 600); // Render a window
    window.setFramerateLimit(60);                       // Set the framerate to 60



    // While the window is open
    while (window.isOpen()) {  


        // Every loop we check for an event using a while loop incase there are multiple.
        while (const auto event = window.pollEvent()) {   
            
            if (event->is<sf::Event::Closed>()) {   // If the event is a close event
                window.close();                     // Close the window

            }




        }

        window.clear();   // Clear everything drawn from last frame


        sf::Texture texture("textures/ButtonGradient.png");
        texture.setSmooth(true);

        sf::Sprite sprite(texture);
        window.draw(sprite);






        window.display(); // Display everything drawn this frame
    }

    return 0;
}