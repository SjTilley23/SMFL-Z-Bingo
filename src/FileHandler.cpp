#include <string>
#include <algorithm>
#include <map>
#include <fstream>
#include <vector>
#include <iomanip>
#include "FileHandler.hpp"

using namespace std;

void FileHandler::ReadFromTxtFileToVec(string fileToRead) {
    
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

void FileHandler::ClearTheVec() {
    vecLine.clear();
} // End of Function

string FileHandler::GetVecByIndex(int Index) {
    
    if (Index < vecLine.size() && Index >= 0) {
        return vecLine[Index];
    } else {
        cout << "Error, Index not in Vec" << endl;
        exit(1);
    } 
} // End of Function


