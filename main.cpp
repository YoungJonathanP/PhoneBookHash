//
// Created by Jonathan Young on 2/15/2020.
// An Empirical Investigation of Hash Functions - PhoneBook
//
//The file phonebook.txt contains 46,332 names and telephone numbers, one per line, with the
//name separated from the phone number by a tab character. Write a program which reads this
//file, stores its contents into a hash table with 4177 entries using separate chaining, and then
//outputs information necessary to produce a histogram as described below. You will use this
//program to investigate the performance of different hash functions.
//

#include "Parsing.h"
#include "PhoneBook.h"
#include "Histogram.h"
#include <string>

// main method- receives piped file for input processing and sends to Parsing
int main(int Argc, char *Argv[]) {
    Parsing Inputs;
    for (int i = 1; i < Argc; i++) {
        string FileName = Argv[i];
        Inputs.processInput(FileName);
    }
    return 0;
}