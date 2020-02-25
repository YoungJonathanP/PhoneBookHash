//
// Created by Jonathan Young 2/20/2020.
//


#include "Histogram.h"
#include <iostream>


Histogram::Histogram() {

}

Histogram::~Histogram() {

}

void Histogram::display(PhoneBook* PhoneBook) {
    cout << "Values as follows" << endl;
    for (int i = 0; i < 4177; i++){
        cout << i << ": ";
        cout << PhoneBook->numberOfEntries(i) << endl;
    }
}