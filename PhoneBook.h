//
// Created by Jonathan Young on 2/22/20.
// Class that holds phonebook. Holds values from parsed inputs and stores them in set array structure. Includes chaining to handle collisions
//

#import <Hashing.h>

#ifndef PHONEBOOKHASH_PHONEBOOK_H
#define PHONEBOOKHASH_PHONEBOOK_H

// phonebook class. Holds information for hashed person values
class PhoneBook {
private:
    // max predetermined size of hash array 4177
    static const int CAPACITY = 4177;
    // variable to track number of entries at a hash index
    int ItemsPerKey = 0;

    // person struct with 3 variables under ownership
    struct Person {
        unsigned int phone;
        string name;
        Person* Next;
    };
    // array of indexes for phonebook objects
    Person PhoneBookArray[CAPACITY];
    // hash object to retrieve hash functionality
    Hashing hashFunct;

public:
    // constructs and initializes a phonebook array with size of 4177
    PhoneBook();
    // deconstructor for phonebook and person objects created inside
    ~PhoneBook();
    // adds a person struct to our phonebookarray. Checks if value has been filled first, and then chains value
    void add(const string&, const unsigned int&);
    // function to see if index contains a value at index key
    bool checkCollision(int key);

    int numberOfEntries(int);

};


#endif //PHONEBOOKHASH_PHONEBOOK_H
