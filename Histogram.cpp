//
// Created by Jonathan Young 2/20/2020.
// Class for displaying values of each bucket
//


#include "Histogram.h"
#include <iostream>

// Histogram class
Histogram::Histogram() = default;

// default deconstructor
Histogram::~Histogram() = default;

// display method- calls on numberOfEntries in phonebook class to return a value for each bucket. Function iterates through all buckets.
void Histogram::display(PhoneBook &PhoneBook) {
    cout << "Values as follows" << endl;
    for (int i = 0; i < 4177; i++) {
        cout << i << ": ";
        cout << PhoneBook.numberOfEntries(i) << endl;
    }
}