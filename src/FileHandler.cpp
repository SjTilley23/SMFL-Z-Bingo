#include <string>
#include <algorithm>
#include <map>
#include <fstream>
#include <vector>
#include <iomanip>
#include "FileHandler.h"

using namespace std;

map<int, string> currentMap;


string FileHandler::ConvertFromTxtFile(string txtToConvert) {
    
    vector<char> charVec;
    string txt;
    
    for (int i = 0; i < txtToConvert.size(); i++) {
        
        charVec.push_back(txtToConvert[i]); // Turns the text into a vector of it's characters
        txt += charVec[i];                  // adds the char in the vector to a string
    }

    return txt;
} // End of Function


void FileHandler::ReadFromTxtFileToMap(string fileToRead) {
    
    string lineRead;
    pair<int, string> linePair;
    int lineNumber = 0;
    
    ifstream ReadFile(fileToRead);  // Open the file and read to ReadFile

    while (getline(ReadFile, lineRead)) {
        lineNumber++;
        linePair.first = lineNumber;
        linePair.second = lineRead;
        currentMap.insert(linePair); // Reads each line into a map as an int string pair 
    }

    ReadFile.close(); // Close the file

} // End of Function

void FileHandler::WriteToFile(string fileToWriteTo, string whatToWrite) {
    
    ofstream file;
    file.open(fileToWriteTo);     // Open the file

    file << whatToWrite << endl;  // Write a string to the file and end line

    file.close();                 // Close the file
} // End of Function

void FileHandler::ClearTheMap() {
    currentMap.clear();
} // End of Function

string FileHandler::GetMapByKey(int key) {
    return currentMap.at(key);
} // End of Function


