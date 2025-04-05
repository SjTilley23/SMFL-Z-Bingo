#include <map>
#include <string>
#include <iostream>
#include "FileHandler.hpp"

using namespace std;

int main() {
    
    FileHandler fileHandler;
    fileHandler.ReadFromTxtFileToMap("Descriptions.txt");
    cout << fileHandler.GetMapByKey(3) << endl;
    fileHandler.ClearTheMap();
    return 0;
}