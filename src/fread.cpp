#include <iostream>
#include <string>
#include <fstream>
#include "../lib/fread.h"

using namespace std;

string readFile(string directory){
    ifstream fileToRead(directory);
    string fileContents;
    string concatContents;
    while(getline(fileToRead, fileContents)){ concatContents += fileContents + "\n";}

    fileToRead.close();
    
    return concatContents;

}
void writeFile(string directory){
    ofstream fileToWrite(directory);
    string whatToWrite;
    cout << "Please type what you want to write to this text file: ";
    getline(cin, whatToWrite);
    fileToWrite << whatToWrite;
    cout << endl;
    cout << "Write succesful. Contents can be found at " << directory << endl;
    fileToWrite.close();
}