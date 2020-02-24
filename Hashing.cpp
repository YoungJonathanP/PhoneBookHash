//
// Created by Jonathan Young 2/20/2020.
//

#include "Hashing.h"

Hashing::Hashing() {
    // create hash array table here size 4177

}

Hashing::~Hashing() {

}

// takes the 10 digit phone number and mods it by the table size
int Hashing::hashMod(int num) {
    return (num%CAPACITY);
}

// evaluates strings and converts those values to their ACSII value, then modded by max table size
int Hashing::hashString(string name) {
    int temp = 0;
    for (int i = 0; i < name.length(); i ++){
        temp += int(name[i]);
    }
    return hashMod(temp);
}

// receives a 10 digit number and separates and adds them in chunks. Then multiplied by last digit
int Hashing::hashFolding(int num) {
    int firstThree = 0;
    int secondThree = 0;
    int thirdThree = 0;
    int lastDigit = 0;
    // creates a value of just the first 3 numbers
    firstThree = num / 10000000;
    // creates a value of the first 6 numbers
    secondThree = num / 10000;
    // creates a value of the first 9 numbers
    thirdThree = num / 10;
    // creates a value of just the final digit
    lastDigit = num % 10;
    return ((firstThree + secondThree + thirdThree) * lastDigit);
}

