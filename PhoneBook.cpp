//
// Created by Jonathan Young on 2/22/20.
// Class that holds phonebook. Holds values from parsed inputs and stores them in set array structure. Includes chaining to handle collisions
//

#include "PhoneBook.h"

// constructs and initializes a phonebook array with size of 4177
PhoneBook::PhoneBook() {
    for (int i = 0; i < CAPACITY; i++){
        PhoneBookArray[i] = new Person;
        PhoneBookArray[i]->name = "";
        PhoneBookArray[i]->phone = 0;
        PhoneBookArray[i]->Next = nullptr;
    }
}

// deconstructor for phonebook and person objects created inside
PhoneBook::~PhoneBook() {
    // todo
}

// adds a person struct to our phonebookarray. Checks if value has been filled first, and then chains value
void PhoneBook::add(const string &name, const int &num) {
    // indexing by hash string and folding
    int index = hashFunct.foldingString(num, name);
    // indexing by hash string and modulo math
    //int index1 = hashFunct.moduloString(num, name);
    if (!checkCollision(index)){
        PhoneBookArray[index]->name = name;
        PhoneBookArray[index]->phone = num;
    } else {
        Person* curr = PhoneBookArray[index];
        Person* temp = new Person;
        temp->name = name;
        temp->phone = num;
        temp->Next = nullptr;
        while (curr->Next != nullptr){
            curr = curr->Next;
        }
        curr->Next = temp;
    }
}

// collision check for adding to a key location. Returns true if value exists at initial location, false otherwise
bool PhoneBook::checkCollision(int key) {
    return (PhoneBookArray[key]->name != "");
}


