#include "ButtonHandler.hpp"
#include <SFML/System/Vector2.hpp>
#include <string>
#include <tuple>

using namespace std;

RandomButtons::RandomButtons(Visuals& visuals, int widthi, int heighti, // Constructor that sets every class variable
    int xi, int yi, int uniqueIdentifier_, string texti, int y_offseti, int fontSizei) : visuals(visuals), 
    width(widthi), height(heighti), x(xi), y(yi), uniqueIdentifier(uniqueIdentifier_), text(texti), 
    y_offset(y_offseti), fontSize(fontSizei) {
        this->buttonShape = visuals.DrawButton(x, y, width, height, text, y_offset, fontSize);
    }


bool RandomButtons::Contains(sf::Vector2f mouseVec2f) {
    return buttonShape.getGlobalBounds().contains(mouseVec2f);
}


// generates a random map, challenge, or both depending on the input
tuple<string, string, string> RandomButtons::IsPressed() {
    FileHandler fileHandler;
    int randomIndex;
    string firstSpot;
    string secondSpot;
    string thirdSpot;


    // Determining what Map goes into the tuple
    switch (uniqueIdentifier) {
        case 0:
        case 2:
            fileHandler.ReadFromTxtFileToVec("txt/Maps.txt");
            randomIndex = rand() % fileHandler.GetSizeOfVec();
            firstSpot = fileHandler.GetVecByIndex(randomIndex);
            fileHandler.ClearTheVec();
            break;
        default:
            firstSpot = "N";
            break;

    }

    // Determining what Challenge goes into the tuple
    switch (uniqueIdentifier) {
        case 1:
        case 2:
            fileHandler.ReadFromTxtFileToVec("txt/Challenges.txt");
            randomIndex = rand() % fileHandler.GetSizeOfVec();
            secondSpot = fileHandler.GetVecByIndex(randomIndex);
            fileHandler.ClearTheVec();

            // Finding the matching Description
            fileHandler.ReadFromTxtFileToVec("txt/Descriptions.txt");
            thirdSpot = fileHandler.GetVecByIndex(randomIndex);
            break;
        default:
            secondSpot = "N";
            thirdSpot = "N";
            break;
    }

    // Making and returning the 3 tuple
    tuple<string, string, string> returnTuple = make_tuple(firstSpot, secondSpot, thirdSpot);
    return returnTuple;
}

    