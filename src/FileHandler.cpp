#include <string>
#include <algorithm>
#include <map>
#include <fstream>
#include <vector>
#include <iomanip>
#include "FileHandler.hpp"

using namespace std;

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
    
    ifstream ReadFile(fileToRead);  // Open the file and read to ReadFile

    if (!ReadFile.good()) {
        cout << "Error, File does not exist" << endl;
        exit(1);
    }

    while (getline(ReadFile, lineRead)) {
        vecLine.push_back(lineRead);
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
    vecLine.clear();
} // End of Function

string FileHandler::GetMapByKey(int key) {
    
    if (key < vecLine.size() && key >= 0) {
        return vecLine[key];
    } else {
        cout << "Error, Key not in Vec" << endl;
        exit(1);
    } 
} // End of Function


