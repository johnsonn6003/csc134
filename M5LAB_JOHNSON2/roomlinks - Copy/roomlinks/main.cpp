#include <iostream>
#include <vector>
#include <string>

#include "room.h"

using namespace std;

void testTwoRooms() {
    // test of stringing together two rooms
    Room* a = new Room("A","Room A");
    Room* b = new Room("B","Room B");

    a->east = b;
    b->west = a;

    // going for a walk
    Room* myLocation = a;

    cout << myLocation->printInfo();

    cout << "...headed east..." << endl;
    myLocation = myLocation->east;

    cout << myLocation->printInfo();

    cout << "...headed west..." << endl;
    myLocation = myLocation->west;

    cout << myLocation->printInfo();

    cout << "done." << endl;
}

void testVector() {
    const int NUM_ROOMS = 4;
    string names[] = {"Room 1",
                        "Room 2",
                        "Room 3",
                        "Room 4"};

    // a vector works very similiar to an array
    // we'll get into the differences later
    vector<Room*> rooms(NUM_ROOMS);

    // now we have a vector of 4 blank rooms.
    // let's configure it with our names and descriptions
    for (int i=0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        //rooms[i]->description = "Set room description here";
    }

    // list all rooms
    for (int i=0; i < NUM_ROOMS; i++) {
        cout << "Next room:" << endl;
        cout << rooms[i]->printInfo();

    }

}

void runTests() {
    /*
    This code gives two separate examples
    1. Create two rooms and use a Room pointer
    to keep the player's current location,
    then move between rooms

    2. Create a vector containing room pointers,
    and create rooms with names and descriptions
    for each pointer
    */

    cout << "Testing room walk" << endl;
    testTwoRooms();
    cout << "-------------------" << endl;
    cout << "Testing room creation" << endl;
    testVector();
}

int main()
{
    runTests();
    return 0;
}
