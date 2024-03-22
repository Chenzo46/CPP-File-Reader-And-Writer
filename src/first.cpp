#include <iostream>
#include <string>
#include <vector>
#include "../lib/fread.h"

using namespace std;

void mainLoop();
int main()
{
    mainLoop();
    system("pause");
    return 0;
}

void mainLoop(){
    while(true){
        string fileDirectory;
        string readOrWrite;

        cout << "Please give the directory of the file (to exit, type \"exit\"): ";
        getline(cin, fileDirectory);
        cout << endl;
        
        if(fileDirectory == "exit") {break;}

        cout << "Would you like to read or write? (r or w?): ";
        getline(cin,readOrWrite);
        cout << endl;

        if(readOrWrite == "r"){ //Function that reads file
            string out = readFile(fileDirectory);
            cout << "File Contents: " << endl;
            cout << out << endl;
        }
        else if(readOrWrite == "w"){ //Function that writes to file
            writeFile(fileDirectory);
        }
    }
}

