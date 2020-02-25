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

#include "Hashing.h"
#include "Parsing.h"
#include "PhoneBook.h"
#include "Histogram.h"
#include <string>
#include <fstream>
#include <iostream>

// Organizes and tests our first hashing function
// receives input from main which reads file. Outputs test to an external file
void testHash1(){

}

// Organizes and tests our second hashing function
// receives input from main which reads file. Outputs test to an external file
void testHash2(){

}

// Organizes and tests our third hashing function
// receives input from main which reads file. Outputs test to an external file
void testHash3(){

}

void testIn(){
    string line;
    ifstream myfile ("C:\\Users\\zero_\\CLionProjects\\PhoneBookHash\\phonebook.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";
}


int main(int Argc, char *Argv[]) {
    Parsing Inputs;
    PhoneBook PhoneListing;
    Histogram outPut;
    //ifstream myfile (R"(C:\Users\zero_\CLionProjects\PhoneBookHash\phonebook.txt)");
    //PhoneListing =
    Inputs.processInput("C:\\Users\\zero_\\CLionProjects\\PhoneBookHash\\phonebook.txt");
//    for (int i = 1; i < Argc; i++) {
//        string FileName = Argv[i];
//        PhoneListing = Inputs.processInput(FileName);
//
//    }
    //outPut.display(PhoneListing);

    return 0;
}