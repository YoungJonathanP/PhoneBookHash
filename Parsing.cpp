//
// Created by Jonathan Young 2/20/2020.
// parsing class helper to read generic file and parse into pre-specified format. New inputs are expected with every new line
//


#include "Parsing.h"

// default constructor
Parsing::Parsing() {

}

// default deconstructor
Parsing::~Parsing() {

}

// reads generic file passed to it and reads information. Separates names with new entry until '/t' character and stores that value in a string. Reads remaining value and removes non-integer characters to form 10 digit number
void Parsing::processInput(const string &FileName) {
    ifstream File;
    File.open(FileName);
    if (!File){
        cout << "ERROR: No File Found Matching : " << FileName << endl;
        return;
    }
    string ReadLine;
    while (!File.eof()){
        getline(File, ReadLine);
        if (ReadLine == ""){
            break;
        }
        int tabPosition = ReadLine.find_first_of('/t');
        int numberAdj1 = ReadLine.find_first_of(')');
        int numberAdj2 = ReadLine.find_last_of('-');
        Name = ReadLine.substr(0, tabPosition);
        TempNum = ReadLine.substr(tabPosition + 2, numberAdj1);
        TempNum += ReadLine.substr(numberAdj1 + 2, numberAdj2);
        TempNum += ReadLine.substr(numberAdj2, 255);
        istringstream(TempNum) >> Number;

    }
}