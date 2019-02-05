#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Type any number: ";
    cin >> a;
    if (a > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else
    {
        cout << "It's not greater than 10." << endl;
    }


    int b;
    cout << "Type any number: ";
    cin >> b;
    if (b>10)
    {
        cout << "It's greater than 10." << endl;
    }
    else if (b==10)
    {
        cout << "It's equal to 10." << endl;
    }
    else
    {
        cout << "It's less than 10." << endl;
    }


    int c;
    cout << "type any number: ";
    cin >> c;
    if (c>100)
    {
        cout << "It's greater than 100." << endl;
    }
    else if (c>10)
    {
        cout << "It's greater than 10." << endl;
    }
    else
    {
        cout << "It's neither greater than 100 nor greater than 10." << endl;
    }


    int x = 0;
    int d;
    for(d = 1; d <= 100; d++)
    {
        x += d;
    }
    cout << x << endl;


    int e;
    for (e=10; e>=5 ; e--)
    {
        cout << e << endl;
    }


    double y = 0.0;
    double f;
    for (f = 0.0 ; f <= 100; f+=0.1)
    {
        y+=f;
    }


    int g = 0;
    while (g <=10)
    {
        cout << g << endl;
        g++;
    }
    cout << "All finished!" << endl;


    int h= 0;
    bool done = false;
    while (!done)
    {
        cout << h << endl;
        h++;
        if (h==10)
            done = true;
    }
    cout << "All Finished!" << endl;
    return 0;
}


