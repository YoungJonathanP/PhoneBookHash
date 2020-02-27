//
// Created by Jonathan Young 2/20/2020.
// Class for displaying values of each bucket
//

#include "PhoneBook.h"

#ifndef PHONEBOOKHASH_HISTOGRAM_H
#define PHONEBOOKHASH_HISTOGRAM_H

// Histogram class
class Histogram {
public:
    // default constructor
    Histogram();

    // default deconstructor
    ~Histogram();

    // display method- calls on numberOfEntries in phonebook class to return a value for each bucket. Function iterates through all buckets.
    void display(PhoneBook &);

};


#endif //PHONEBOOKHASH_HISTOGRAM_H
