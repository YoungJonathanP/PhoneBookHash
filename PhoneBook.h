//
// Created by Jonathan Young on 2/22/20.
// Class that holds values for parsed inputs
//

#import <Hashing.h>

#ifndef PHONEBOOKHASH_PHONEBOOK_H
#define PHONEBOOKHASH_PHONEBOOK_H


class PhoneBook {
private:
    // max predetermined size of hash array
    const int CAPACITY = 4177;
    // variable to track number of entries at a hash index
    int ItemsPerKey;
    // array of indexes for phonebook objects
    int[] PhoneBookArray;
    // person struct
    Person Person;

    

public:
    PhoneBook();
    PhoneBook(int);
    ~PhoneBook();
    bool add(const int&, Hashing& person);

};


#endif //PHONEBOOKHASH_PHONEBOOK_H
