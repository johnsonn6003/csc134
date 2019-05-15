#include <iostream>
#include <vector>
#include "room.h"


using namespace std;

void testTwoRooms()
{
     Room* a = new Room("Entrance", "Entrance Area");
     Room* b = new Room("Medical", "Medical Area");

    a->east = b;
    b->west = a;

    room* myLocation= a;
    cout << myLocation->printDescription();

    cout << "...Headed east" << endl;
    myLocation = myLocation->east;

    cout << "...Headed west" << endl;
    myLocation = myLocation->west;

    cout << myLocation->printDescription();
    cout << "done." << endl;
}

void testVector()
{
    const int NUM_ROOMS = 5;
    string names[] =
                    {"Entrance",
                    "Medical Area",
                    "Training Room",
                    "Meeting Hall",
                    "Portal Room"};
    string descriptions[] =
                    {"This is the entrance of the watchtower",
                    "This is the medical area.",
                    "This is the training hall",
                    "This is the meeting hall",
                    "This is the portal room",
                    }

    // a vector works very similiar to an array
    // we'll get into the differences later
    vector<Room*> rooms(NUM_ROOMS);

    // now we have a vector of 5 blank rooms.
    // let's configure it with our names and descriptions
    for (int i=0; i < NUM_ROOMS; i++)
        {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        //rooms[i]->description = "Set room description here";
        }

    // list all rooms
    for (int i=0; i < NUM_ROOMS; i++)
        {
        cout << "Next room:" << endl;
        cout << rooms[i]->printDescription();
        }
void runTests()
    {
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
