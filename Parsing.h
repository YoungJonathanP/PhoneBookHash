//
// Created by Jonathan Young 2/20/2020.
// parsing class helper to read generic file and parse into pre-specified format. New inputs are expected with every new line
//

#ifndef PHONEBOOKHASH_PARSING_H
#define PHONEBOOKHASH_PARSING_H

#include "Hashing.h"
#include "PhoneBook.h"
#include <iostream>
#include <fstream>
#include <sstream>


class Parsing {
public:
    // default constructor
    Parsing();
    // default deconstructor
    ~Parsing();
    // reads generic file passed to it and reads information. Separates names with new entry until '/t' character and stores that value in a string. Reads remaining value and removes non-integer characters to form 10 digit number
    void processInput(const string &FileName);

private:
    PhoneBook PhoneListings;
    //Hashing Person;
    string Name;
    int Number;
    string TempNum;
};


#endif //PHONEBOOKHASH_PARSING_H
