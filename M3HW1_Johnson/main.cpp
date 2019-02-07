#include <iostream>
#include <math.h>

using namespace std;
    int addOne (int start)
    {
        int newNumber;
        newNumber=start+1;
        return newNumber;
    }
int main()
{
    cout << "Listing 5-1" << endl;
    cout << fabs (-10.5) << endl;
    cout << fabs (10.5) << endl;
    cout << "\t" << endl;

    cout << "Listing 5-2" << endl;
    double myNumber;
    myNumber = fabs (-23.87);
    cout << myNumber << endl;
    cout << "\t" << endl;

    cout << "Listing 5-3" << endl;
    double start;
    double finish;
    start = -253.895;
    finish = fabs(start);
    cout << finish << endl;
    cout << "\t" << endl;

    cout << "Listing 5-4" << endl;
    double number=10.0;
    double exponent=3.0;
    cout <<pow(number, exponent) << endl;
    cout << "\t" << endl;

    cout << "Listing 5-5" << endl;
    int testNumber;
    int result;
    testNumber=20;
    result=addOne(testNumber);
    cout << result << endl;
    cout << "\t" << endl;
    return 0;
}
