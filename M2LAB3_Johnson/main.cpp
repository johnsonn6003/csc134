#include <iostream>

using namespace std;

int main()
{

    //set numerical grade
    //convert to letter grade
    /*
    this program will calculate letter grade given a number grade.
    Additions
    -enter 3 grades each run
    -reenter invalid grades
    */
    double numberGrade;
    char letterGrade;

for (int testNum=1 ; testNum < 4; testNum++)
    {

   cout << "Type any number grade: " << endl;
    cin >> numberGrade;

   while (numberGrade < 0 || numberGrade >= 100)
        {
        cout << "Invalid number, please try again." << endl;
        cin >> numberGrade;
        }

    if(numberGrade >= 89.5 )
    {
        letterGrade = 'A';
    }
    else if (numberGrade >= 79.5)
    {
        letterGrade = 'B';
    }
    else if (numberGrade >= 74.5)
    {
        letterGrade = 'C';
    }
    else if (numberGrade >= 69.5)
    {
        letterGrade = 'D';
    }
    else
    {
        letterGrade = 'F';
    }


    cout << "Your letter grade is " << letterGrade << endl;
   }
    return 0;
   }
