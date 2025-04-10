#ifndef __FILEHANDLER_HPP_INCLUDED__
#define __FILEHANDLER_HPP_INCLUDED__

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <fstream>
#include <algorithm>

class FileHandler {
    private:
        std::vector<std::string> vecLine;       // Vector to be filled with lines read from a file

    public:
        void ReadFromTxtFileToVec(std::string fileToRead);                      // Reads lines from a txt file into a vector
        void WriteToFile(std::string fileToWriteTo, std::string whatToWrite);   // Writes a string to a new line in an open file
        void ClearTheVec();                                                     // Clears everything out of the vector
        std::string GetVecByIndex(int Index);                                   // Gets a string in the vec by it's index ("line") number
};
#endif // __FILEHANDLER_HPP_INCLUDED__ 
