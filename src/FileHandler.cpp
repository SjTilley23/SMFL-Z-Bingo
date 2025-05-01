#include "FileHandler.hpp"

using namespace std;

void FileHandler::ReadFromTxtFileToVec(string fileToRead) {
    
    string lineRead;
    
    ifstream ReadFile(fileToRead);  // Open the file and read to ReadFile

    
    if (!ReadFile.good()) { 
        cout << "Error, File does not exist" << endl; // Spits an error and exists if the file does not exist
        exit(1);
    }

    while (getline(ReadFile, lineRead)) {   // while there is a next line in the file
        vecLine.push_back(lineRead);        // read the line into the class vector
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
    
    if (Index < vecLine.size() && Index >= 0) {     // checks if the index is actually in the Vector
        return vecLine[Index];                      // Returns the element at the specified index
    } else {
        cout << "Error, Index not in Vec" << endl;  // outs an error if it's not an idex in the Vec 
        exit(1);                                    // exits the program
    }
}
    

int FileHandler::GetSizeOfVec() {
    try {
        return vecLine.size();
    } catch (exception) {
        cout << "There was an error with a vecline.size() call" << endl;
        exit(1);
    }
   
}