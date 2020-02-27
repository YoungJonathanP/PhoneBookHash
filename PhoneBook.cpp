//
// Created by Jonathan Young on 2/22/20.
// Class that holds phonebook. Holds values from parsed inputs and stores them in set array structure. Includes chaining to handle collisions
//

#include "PhoneBook.h"

// constructs and initializes a phonebook array with size of 4177
PhoneBook::PhoneBook() {
    for (auto &i : PhoneBookArray) {
        //PhoneBookArray[i] = new Person();
        i.name = ""; //("Frank" + to_string(i));
        i.phone = 0;
        i.Next = nullptr;
    }
}

// deconstructor for phonebook and person objects created inside
PhoneBook::~PhoneBook() {
    Person *curr;
    Person *temp;
    for (auto &i : PhoneBookArray) {
        curr = &i;
        if (i.name == "") {
            continue;
        } else {
            curr = curr->Next;
            while (curr != nullptr) {
                temp = curr->Next;
                delete curr;
                curr = temp;
            }
            i.Next = nullptr;
        }
    }
}


// adds a person struct to our phonebookarray. Checks if value has been filled first, and then chains value
void PhoneBook::add(const string &name, const unsigned int &num) {
    // indexing by hash string and folding
    int index = hashFunct.foldingString(num, name);
    // indexing by hash string and binary bitwise shifting
    //int index = hashFunct.binaryString(num, name);
    // indexing by hash string and modulo math
    //int index = hashFunct.moduloString(num, name);
    if (!checkCollision(index)) {
        PhoneBookArray[index].name = name;
        PhoneBookArray[index].phone = num;
    } else {
        auto *curr = &PhoneBookArray[index];
        auto *temp = new Person;
        temp->name = name;
        temp->phone = num;
        temp->Next = nullptr;
        while (curr->Next != nullptr) {
            curr = curr->Next;
        }
        curr->Next = temp;
    }
}

// collision check for adding to a key location. Returns true if value exists at initial location, false otherwise
bool PhoneBook::checkCollision(int key) {
    return (PhoneBookArray[key].name != ""); //return (!PhoneBookArray[key]->name.empty());
}

// helper function to count number of entries at each index
int PhoneBook::numberOfEntries(int index) {
    int count = 0;
    if (PhoneBookArray[index].name == "") {
        return count;
    } else {
        count++;
        Person *curr = &PhoneBookArray[index];
        while (curr->Next != nullptr) {
            count++;
            curr = curr->Next;
        }
    }
    return count;
}

