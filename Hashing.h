//
// Created by Jonathan Young 2/20/2020.
//


#ifndef PHONEBOOKHASH_HASHING_H
#define PHONEBOOKHASH_HASHING_H

#include <functional>
#include <string>

using namespace std;

class Hashing {
private:
    struct Person {
        explicit Person(string name, int phone);
        int phone;
        string name;
        Person* Next;
    };
    using Person = struct Person;
    int key;
    // max predetermined size of hash array
    const int CAPACITY = 4177;
public:
    Hashing();

    ~Hashing();

    // hashing function using Modulo Arithmetic
    int hashMod(int);

    // hashing function using String to integer conversion
    int hashString(string);

    // hashing function using folding of numeric values to create key
    int hashFolding(int);

    // function to see if index contains a value at index key
    bool collision(int key);


};


#endif //PHONEBOOKHASH_HASHING_H
