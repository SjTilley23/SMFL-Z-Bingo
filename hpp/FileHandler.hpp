#ifndef __FILEHANDLER_HPP_INCLUDED__
#define __FILEHANDLER_HPP_INCLUDED__

#include <iostream>
#include <string>
#include <map>
#include <vector>

class FileHandler {
    private:
        std::vector<std::string> vecLine;

    public:
        void ReadFromTxtFileToVec(std::string fileToRead);
        void WriteToFile(std::string fileToWriteTo, std::string whatToWrite);
        void ClearTheVec();
        std::string GetVecByIndex(int Index);
};
#endif // __FILEHANDLER_HPP_INCLUDED__ 
