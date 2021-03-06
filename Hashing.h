//
// Created by Jonathan Young 2/20/2020.
// This class contains the various hash methods that will be used for the purposes of our investigation
//


#ifndef PHONEBOOKHASH_HASHING_H
#define PHONEBOOKHASH_HASHING_H

#include <functional>
#include <string>

using namespace std;

// Hashing class for creating keys
class Hashing {
private:

    //using Person = struct Person;
    // max predetermined size of hash array 4177
    static const int Capacity = 4177;
public:
    // default constructor
    Hashing();

    // default deconstructor
    ~Hashing();

    // hashing function using Modulo Arithmetic
    int hashMod(unsigned int);

    // evaluates strings and converts those values to their ACSII value, then modded by max table size
    int hashString(const string &);

    // hashing function using folding of numeric values to create key
    int hashFolding(unsigned int);

    // hashing function that converts value to binary and uses bitwise shift operators to randomize the value
    int binaryManipulation(unsigned int);

    // hashing function that combines string hashing and integer folding hashing
    int foldingString(unsigned int, const string &);

    // hashing function that combines string hashing with modulo hashing
    int moduloString(unsigned int, const string &);

    // hashing function that combines string hashing with binary manipulation
    int binaryString(unsigned int, const string &);
};


#endif //PHONEBOOKHASH_HASHING_H
