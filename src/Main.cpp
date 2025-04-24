#include "Main.hpp"
#include "ButtonHandler.hpp"

using namespace std;

// Adds an entry to the Random button vector
void main::addToRBV(RandomButtons buttonToAdd) {
    randButVec.push_back(buttonToAdd);
}


// Gets the size of the random button vector
int main::getRBVSize() {
    return randButVec.size();
}

// Gets the element at the specified index from the random button vector
RandomButtons main::getFromRBV(int index) {
    
    if (index < getRBVSize()) {
        return randButVec.at(index);
    } else {
        cout << "Index not in range of randButVec" << endl;
        exit(1);
    }
}

// clears the random button vector
void main::clearRBV() {
    randButVec.clear();
}

void main::setCurrentScreen(int screenNumber) {
    currentScreen = screenNumber;
}

int main::getCurrentScreen() {
    return currentScreen;
}





int main() {
    sf::Vector2f mouseVec2f;

    int width = 600, height = 750;
    sf::RenderWindow window(
        sf::VideoMode(sf::Vector2u(width, height)),
        "Zombies Bingo",
        sf::Style::Default,
        sf::State::Windowed);
    Visuals visuals(window, width, height);

    window.setFramerateLimit(15);  // Set the framerate to 15
    class main mainObj;

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

        
        window.clear(sf::Color(220,220,220));
        /* Clears the entire window of everything drawn from last frame. 
        This is one of two sections where the program should go. This section is
        almost exclusively for rendering objects in the window. See the events
        section for code that does actions based on things taken place.
        
        This section determines which screen is supposed to be rendered and renders
        it appropriately. It uses a switch and case statement tied to a variable in 
        the main class to tell which screen is supposed to be rendered. See the main
        class header for an in depth explanation of which number corresponds
        to which screen. Also included in the obsidian notes.*/


        // Switch statement reading the current screen variable
        switch (mainObj.getCurrentScreen()) {


            // Case for the starting screen
            case 0:
                break;
            
            // Case for the main screen
            case 1:

                // Button Rendering Section. Create a button object then add it to the appropriate vector
                RandomButtons randomMapButton(visuals, 125, 20, 470,
                5, 0,"Random Map", 3, 14);
                mainObj.addToRBV(randomMapButton);

                RandomButtons randomChallengeButton(visuals, 125, 20, 470,
                     30, 1, "Random Challenge", 3, 14);
                mainObj.addToRBV(randomChallengeButton);

                RandomButtons randomBothButton(visuals, 250, 20, 350,
                     55, 2, "Randomize Both", 3, 14);
                mainObj.addToRBV(randomBothButton);




                break; 

        }
        






        
        
        /* Displays everything rendered to the window. All rendering shgould happen above
        this line and below the clear line. Unpredictable behaviour may occur if this
        rule is not followed. */
        window.display();

    } // End of While 

    return 0;

} // End of main
