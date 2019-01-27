#include <iostream>

using namespace std;

int main()
{
    int myNumber;
    myNumber = 10;
    cout << myNumber << endl;

    int myNumber2;
    myNumber2 = 20;
    cout << myNumber2 << endl;

    int start = 50;
    int finish;
    finish = start;
    cout << finish << endl;

    int final;
    int time;
     final = 28;
     time = 18;
     cout << final - time << endl;

     int first2, second2;
     cout << "dividing 28 by24.=" <<endl;
     first2 = 28;
     second2 = 14;
     cout << "Quotient " << first2 / second2 << endl;
     cout << "Remainder " << first2 % second2 << endl;
     cout << "Dividing 32 by 6." << endl;

     int first3, second3;
     first3 = 32;
     second3 = 6;
     cout << "Quotient " <<first3 / second3 << endl;
     cout << "Remainder " << first3 % second3 << endl;

     string myString;
     myString = "abcdef";
     cout << myString << endl;

     string myString2;
     myString2 = "Hello there";
     cout << myString2 << endl;

     int first4 = 10;
     int second4 = 20;
     string result;
    result = (first4 == second4) ? "equal" : " not equal";
     cout << result << endl;

     string name;
    cout << "Type your name: ";
    cin >> name;
    cout << "Your name is " << name << endl;
    return 0;
}
