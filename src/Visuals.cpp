#include "Visuals.hpp"

// Constructor that passes in and sets just a window reference
Visuals::Visuals(sf::RenderWindow& window)
    : window(window) {}


    
// Constructor that passes in and sets a window reference, a width, and a height
Visuals::Visuals(sf::RenderWindow& window, uint32_t widthi, uint32_t heighti)
    : window(window), width(widthi), height(heighti) {}



sf::ConvexShape Visuals::DrawButton(float position_x, float position_y, float width, float height) {
    
    sf::ConvexShape button;    // Empty Convex Shape Object
    sf::Texture texture;       // Empty Texture Object
    button.setPointCount(10);  // Initialize Convex Shape with 10 vertices

    // Sets up each vertice's coordinates in relation using the x and y position of the top left of the button
    // and the width and height of the button. There is a diagram in obsidian.
    button.setPoint(0, {position_x + (width/6), position_y + height});
    button.setPoint(1, {position_x + (width/18), position_y + ((height * 4)/5)});
    button.setPoint(2, {position_x,  position_y + (height/2)});
    button.setPoint(3, {position_x + (width/18), position_y + (height/5)});
    button.setPoint(4, {position_x + (width/6),  position_y});
    button.setPoint(5, {position_x + ((width*5)/6), position_y});
    button.setPoint(6, {position_x + ((width*17)/18), position_y + (height/5)});
    button.setPoint(7, {position_x + width, position_y + (height/2)});
    button.setPoint(8, {position_x + ((width*17)/18), position_y + ((height * 4)/5)});
    button.setPoint(9, {position_x + ((width*5)/6), position_y + height});

    
    button.setOutlineColor(sf::Color(192,192,192));  // Sets the outlines color to a light grey
    button.setOutlineThickness(2);                   // Sets the outlines thickness in pixels to 2


    static_cast<void>(texture.loadFromFile( // Opens a texture to our texture object
        "C:\\Main\\Projects\\C++ Projects\\SFML-Z-Bingo\\SMFL-Z-Bingo\\textures\\ButtonGradient.png"));
    texture.setSmooth(true);      // Smooths the texture so the pixels aren't as visible
    button.setTexture(&texture);  // Sets the texture of the button to a reference to our texture
    window.draw(button);          // Draws the button into the window

    return button; // Returns our ConvexShape object, button
}
