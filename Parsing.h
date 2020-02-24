//
// Created by Jonathan Young 2/20/2020.
//

#ifndef PHONEBOOKHASH_PARSING_H
#define PHONEBOOKHASH_PARSING_H

#include "Hashing.h"
#include <iostream>
#include <fstream>
#include <sstream>


class Parsing {
public:
    Parsing();

    ~Parsing();

    void processInput(const string &FileName);

private:
    Hashing Person;
    string Name;
    int Number;
    string TempNum;
};


#endif //PHONEBOOKHASH_PARSING_H
