#include <SFML/Graphics.hpp>
#include "Visuals.hpp"

sf::RenderWindow Visuals::RenderWindow(uint32_t width, uint32_t height) {
    sf::RenderWindow window(
        sf::VideoMode({width, height}), "My Window", sf::Style::Default, sf::State::Windowed);

    return window;
}

sf::FloatRect Visuals::DrawButton(float position_x, float position_y, float width, float height) {
    
    sf::ConvexShape button;
    sf::Texture texture;
    button.setPointCount(10);

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

    button.setOutlineColor(sf::Color::Black);
    button.setOutlineThickness(4);

    texture.loadFromFile("C:\\Main\\Projects\\C++ Projects\\SFML-Z-Bingo\\SMFL-Z-Bingo\\textures\\ButtonGradient.png");
    texture.setSmooth(true);
    button.setTexture(&texture);
    window.draw(button);

    return button.getGlobalBounds();


}
