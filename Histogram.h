//
// Created by Jonathan Young 2/20/2020.
//

#import <PhoneBook.h>

#ifndef PHONEBOOKHASH_HISTOGRAM_H
#define PHONEBOOKHASH_HISTOGRAM_H


class Histogram {
public:
    Histogram();
    ~Histogram();
    void display(PhoneBook&);

private:
    PhoneBook* temp;
    PhoneBook* curr;
    int TotalPerKey = 0;

};


#endif //PHONEBOOKHASH_HISTOGRAM_H
