#include "Visuals.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/ConvexShape.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/System/String.hpp>
#include <SFML/System/Vector2.hpp>

// Constructor that passes in and sets just a window reference
Visuals::Visuals(sf::RenderWindow& window)
    : window(window) {}
    


// Constructor that passes in and sets a window reference, a width, and a height
Visuals::Visuals(sf::RenderWindow& window, uint32_t widthi, uint32_t heighti)
    : window(window), width(widthi), height(heighti), font("txt/FreeSerif.ttf") {}



sf::ConvexShape Visuals::DrawButton(float position_x, float position_y, float width, float height, std::string texti, int y_offset, int fontSize) {

    // Function Variables
    sf::ConvexShape button;
    sf::Texture texture;

    // Setting up the button's shape
    button = setButtonVertices(position_x, position_y, height, width, 
        button); // Initializes the amount and position of the vertices of the button to be drawn
    button.setOutlineColor(sf::Color(192,192,192));  // Sets the outlines color to a light grey
    button.setOutlineThickness(2);                               // Sets the outlines thickness in pixels to 2

    // setting up the button's text
    sf::Text text(font);                                          // Initilize a Text object using the class font variable
    text.setString(texti);                                        // Set the text to the inputted string
    text.setCharacterSize(fontSize);                        // Set the size of the text characters in pixels 
    text.setFillColor(sf::Color::Black);                   // Set the text color to black
    sf::Vector2f buttonC = button.getGlobalBounds().getCenter(); // Get the rectanglular bounds of the the button
    sf::Vector2f textSize = text.getGlobalBounds().size;
    textSize.x = textSize.x / 2;
    textSize.y = (textSize.y / 2) + y_offset;
 
    text.setPosition(buttonC - textSize);            // Set the texts position to the buttons center


    // Texturing the button
    static_cast<void>(texture.loadFromFile(             // Opens a texture to our texture object
        "textures/ButtonGradient.png"));
    texture.setSmooth(true);                            // Smooths the texture so the pixels aren't as visible
    button.setTexture(&texture);               // Sets the texture of the button to a reference to our texture

    // Drawing the button and text into the window
    window.draw(button);                      // Draws the button into the window
    window.draw(text);                        // Draws the text into the window

    // Returns our ConvexShape object, button
    return button;
} // End of Function



sf::ConvexShape Visuals::setButtonVertices(float position_x, float position_y, float height, float width, sf::ConvexShape buttonShape) {
    
    buttonShape.setPointCount(10);  // Initialize Convex Shape with 10 vertices

    // Sets up each vertice's coordinates in relation using the x and y position of the top left of the button
    // and the width and height of the button. There is a diagram in obsidian.

    buttonShape.setPoint(0, {   position_x + (width/6),             position_y + height});
    buttonShape.setPoint(1, {   position_x + (width/18),            position_y + ((height * 4)/5)});
    buttonShape.setPoint(2, {   position_x,                         position_y + (height/2)});
    buttonShape.setPoint(3, {   position_x + (width/18),            position_y + (height/5)});
    buttonShape.setPoint(4, {   position_x + (width/6),             position_y});
    buttonShape.setPoint(5, {   position_x + ((width*5)/6),         position_y});
    buttonShape.setPoint(6, {   position_x + ((width*17)/18),       position_y + (height/5)});
    buttonShape.setPoint(7, {   position_x + width,                 position_y + (height/2)});
    buttonShape.setPoint(8, {   position_x + ((width*17)/18),       position_y + ((height * 4)/5)});
    buttonShape.setPoint(9, {   position_x + ((width*5)/6),         position_y + height});

    return buttonShape;
} // End of Function
