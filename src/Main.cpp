#include "Main.hpp"

using namespace std;


// void main::DrawMainScreen() {

//     // Draw each button at the appropriate spot
// }




int main() {
    sf::Vector2f mouseVec2f;

    int width = 400, height = 600;
    sf::RenderWindow window(
        sf::VideoMode(sf::Vector2u(width, height)),
        "Zombies Bingo",
        sf::Style::Default,
        sf::State::Windowed);
    Visuals visuals(window, width, height);

    window.setFramerateLimit(15);  // Set the framerate to 15


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

        window.clear(sf::Color(220,220,220));   // Clear everything drawn from last frame

        // switch (curentPage) {
        //     case 0:


        // }
        RandomButtons randomMapButton(visuals, 100, 20, 10, 10, 0);

        window.display();
    }

    return 0;
}
