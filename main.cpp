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

#include <Hashing.h>
#include <string>
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


int main(int Argc, char *Argv[]) {
//    Parsing Inputs;
//    for (int i = 1; i < Argc; i++) {
//        string FileName = Argv[i];
//        Inputs.processInput(FileName);
//
//    }
    char nts1[] = "Test";
    char nts2[] = "Test";
    string str1 (nts1);
    string str2 (nts2);

    hash<char*> ptr_hash;
    hash<std::string> str_hash;

    cout << "same hashes:\n" << boolalpha;
    cout << "nts1 and nts2: " << (ptr_hash(nts1)==ptr_hash(nts2)) << '\n';
    cout << "str1 and str2: " << (str_hash(str1)==str_hash(str2)) << '\n';
    return 0;
}