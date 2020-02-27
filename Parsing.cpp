//
// Created by Jonathan Young 2/20/2020.
// parsing class helper to read generic file and parse into pre-specified format. New inputs are expected with every new line
//


#include "Parsing.h"


// default constructor
Parsing::Parsing() = default;

// default deconstructor
Parsing::~Parsing() = default;

// reads generic file passed to it and reads information. Separates names with new entry until '/t' character and stores that value in a string. Reads remaining value and removes non-integer characters to form 10 digit number
void Parsing::processInput(const string &FileName) {
    ifstream File(FileName);
    //File.open(FileName);
    if (!File) {
        cout << "ERROR: No File Found Matching : " << FileName << endl;
        return;
    }
    string ReadLine;
    while (!File.eof()) {
        getline(File, ReadLine);
        if (ReadLine == "") {
            cout << "End of FIle" << endl;
            break;
        }
        Number = 0;
        int tabPosition = ReadLine.find_first_of('\t');
        Name = ReadLine.substr(0, tabPosition);
        TempNum = ReadLine.substr(tabPosition + 2, 255);
        TempNum2 = "";
        for (char i : TempNum) {
            if (isdigit(i))
                TempNum2 += i;
        }
        istringstream(TempNum2) >> Number;
        PhoneListings.add(Name, Number);
    }
    outPut.display(reinterpret_cast<PhoneBook &>(PhoneListings));
}
