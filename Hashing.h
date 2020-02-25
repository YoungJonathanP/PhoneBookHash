//
// Created by Jonathan Young 2/20/2020.
// This class contains the various hash methods that will be used for the purposes of our investigation
//


#ifndef PHONEBOOKHASH_HASHING_H
#define PHONEBOOKHASH_HASHING_H

#include <functional>
#include <string>

using namespace std;

class Hashing {
private:

    //using Person = struct Person;
    // max predetermined size of hash array
    static const int Capacity = 10;
public:
    // default constructor
    Hashing();
    // default deconstructor
    ~Hashing();

    // hashing function using Modulo Arithmetic
    int hashMod(int);

    // evaluates strings and converts those values to their ACSII value, then modded by max table size
    int hashString(const string&);

    // hashing function using folding of numeric values to create key
    int hashFolding(int);

    // hashing function that combines string hashing and integer folding hashing
    int foldingString(int, const string&);

    // hashing function that combines string hashing with modulo hashing
    int moduloString(int, const string&);

};


#endif //PHONEBOOKHASH_HASHING_H
