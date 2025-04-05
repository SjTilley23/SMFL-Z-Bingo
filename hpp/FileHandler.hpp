#ifndef __FILEHANDLER_HPP_INCLUDED__
#define __FILEHANDLER_HPP_INCLUDED__

#include <iostream>
#include <string>
#include <map>
#include <vector>

class FileHandler {
    private:
        std::vector<std::string> vecLine;
        std::string ConvertFromTxtFile(std::string fileToRead);

    public:
        void ReadFromTxtFileToMap(std::string fileToRead);
        void WriteToFile(std::string fileToWriteTo, std::string whatToWrite);
        void ClearTheMap();
        std::string GetMapByKey(int key);
};
#endif // __FILEHANDLER_HPP_INCLUDED__ 
