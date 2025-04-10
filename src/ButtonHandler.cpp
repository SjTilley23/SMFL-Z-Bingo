#include "ButtonHandler.hpp"

using namespace std;

ButtonHandler::ButtonHandler(Visuals& visuals, int widthi, int heighti, // Constructor that sets every class variable
    int xi, int yi, std::string uniqueIdentifieri) : visuals(visuals), 
    width(widthi), height(heighti), x(xi), y(yi), uniqueIdentifier(uniqueIdentifieri) {}