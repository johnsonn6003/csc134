#include <iostream>

using namespace std;

int main()
{
    int grade;
    int numTest;
    int average; //or float
    int total=0; //accumulator
    int numb=1;

    //verbs:
    //input, output, add, average

    //ask user for number of tests to average
    cout << "How many test to average? " << endl;
    cin >> numTest;

    for(int count=1; count <= numTest; count++)
    {
        cout << "Grade for test " << numb<< "? " << endl ;
        cin >> grade;
        total = total + grade;
        numb++;
    }
    cout << "total= " << total << endl;
    //within loop ask for a test grade
    //add it to the total


    //find average by dividing total by number of test
    average = total / numTest;
    cout << "the average is " <<average<< endl;

    int grade2;
    int numTest2;
    float average2;
    int total2=0;
    int number=1;
    int numb2=1;

    cout << "How many test to average? " << endl;
    cin >> numTest2;

    while (number <=numTest2)
    {
        cout << "Grade for test " <<numb2<< "?" << endl;
        cin >> grade2;
        number++;
        numb2++;
        total2 = total2 + grade2;
    }
      cout << "total= " << total2 << endl;

    average2 = total2 / numTest2;
    cout << "the average is " <<average2<< endl;

    return 0;
}
