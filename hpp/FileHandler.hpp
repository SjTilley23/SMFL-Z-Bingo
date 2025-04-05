#ifndef __FILEHANDLER_H_INCLUDED__
#define __FILEHANDLER_H_INCLUDED__

#include <iostream>
#include <string>
#include <map>

class FileHandler {
    private:
        std::map<int, std::string> currentMap;
        std::string ConvertFromTxtFile(std::string fileToRead);

    public:
        void ReadFromTxtFileToMap(std::string fileToRead);
        void WriteToFile(std::string fileToWriteTo, std::string whatToWrite);
        void ClearTheMap();
        std::string GetMapByKey(int key);
};
#endif // __FILEHANDLER_H_INCLUDED__ 
