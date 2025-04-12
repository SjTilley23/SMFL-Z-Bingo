#include "ButtonHandler.hpp"

using namespace std;

RandomButtons::RandomButtons(Visuals& visuals, int widthi, int heighti, // Constructor that sets every class variable
    int xi, int yi) : visuals(visuals), 
    width(widthi), height(heighti), x(xi), y(yi) {
        this->buttonRect = visuals.DrawButton(x, y, width, height);
    }


// generates a random map, challenge, or both depending on the input
pair<string, string> RandomButtons::IsPressed(int uniqueIndentifier) {

    FileHandler fileHandler;
    int randomIndex;
    pair<string, string> returnPair;

    switch (uniqueIndentifier) {
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

    switch (uniqueIndentifier) {
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

    