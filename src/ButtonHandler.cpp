#include "ButtonHandler.hpp"

using namespace std;

RandomButtons::RandomButtons(Visuals& visuals, int widthi, int heighti, // Constructor that sets every class variable
    int xi, int yi, int uniqueIdentifier_) : visuals(visuals), 
    width(widthi), height(heighti), x(xi), y(yi), uniqueIdentifier(uniqueIdentifier_) {
        this->buttonShape = visuals.DrawButton(x, y, width, height, "asdfasdf");
    }


// generates a random map, challenge, or both depending on the input
pair<string, string> RandomButtons::IsPressed() {
    FileHandler fileHandler;
    int randomIndex;
    pair<string, string> returnPair;

    switch (uniqueIdentifier) {
        case 0:
        case 2:
            fileHandler.ReadFromTxtFileToVec("txt/Maps.txt");
            randomIndex = rand() % fileHandler.GetSizeOfVec();
            returnPair.first = fileHandler.GetVecByIndex(randomIndex);
            fileHandler.ClearTheVec();
            break;
        default:
            returnPair.first = "N";
            break;

    }

    switch (uniqueIdentifier) {
        case 1:
        case 2:
            fileHandler.ReadFromTxtFileToVec("txt/Challenges.txt");
            randomIndex = rand() % fileHandler.GetSizeOfVec();
            returnPair.second = fileHandler.GetVecByIndex(randomIndex);
            fileHandler.ClearTheVec();
            break;
        default:
            returnPair.second = "N";
            break;
    }

    return returnPair;
}

    