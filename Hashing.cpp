//
// Created by Jonathan Young 2/20/2020.
// This class contains the various hash methods that will be used for the purposes of our investigation
//

#include "Hashing.h"

// default constructor
Hashing::Hashing() = default;

//Hashing::Hashing(const int capacity) : CAPACITY(capacity) {}

// default deconstructor
Hashing::~Hashing() = default;

// takes the 10 digit phone number and mods it by the table size
int Hashing::hashMod(unsigned int num) {
    return num % Capacity;
}

// evaluates strings and converts those values to their ACSII value, then modded by max table size
int Hashing::hashString(const string &name) {
    int temp = 0;
    for (char i : name) {
        temp += 11 * int(i);
    }
    return hashMod(temp);
}

// receives a 10 digit number and separates and adds them in chunks. Then multiplied by last 4 digits
int Hashing::hashFolding(unsigned int num) {
    int firstThree = 0;
    int tempThree = 0;
    int secondThree = 0;
    int lastFour = 0;
    // creates a value of just the first 3 numbers
    firstThree = num / 10000000;
    // creates a value of the next 3 numbers
    tempThree = num % 10000000;
    secondThree = tempThree / 10000;
    // creates a value of the last 4 digits
    lastFour = num % 10000;
    // returns a value no greater than 19,978,002
    return ((firstThree + secondThree) * lastFour);
}

// hashing function that converts value to binary and uses bitwise shift operators to randomize the value
int Hashing::binaryManipulation(unsigned int num) {
    long manipVal = num;
    manipVal << 2; // binary bitwise shift of 2 to the left
    manipVal *= 7; // multiply by highest single digit prime
    manipVal >> 2; // binary bitwise shift of 2 to the right
    return (unsigned int) manipVal;
}

// hashing function that combines string hashing and integer folding hashing
int Hashing::foldingString(unsigned int num, const string &name) {
    return hashMod(hashString(name) + hashFolding(num));
}

// hashing function that combines string hashing with modulo hashing
int Hashing::moduloString(unsigned int num, const string &name) {
    return hashMod(hashString(name) + hashMod(num));
}

// hashing function that combines string hashing with binary manipulation
int Hashing::binaryString(unsigned int num, const string &name) {
    return hashMod(hashString(name) + binaryManipulation(num));
}
