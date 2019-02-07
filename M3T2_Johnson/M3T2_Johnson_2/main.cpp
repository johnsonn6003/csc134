#include <iostream>

using namespace std;

void createPayChartWithFor()
{
    cout << "This is the pay chart using for" << endl;
    int hour = 30;
    float pay;
    float hourlyPay;
    //ask the user for hourly pay
    cout << "What is your hourly pay?" << endl;
    cin >> pay;
    hourlyPay = pay * hour;


    cout << "Hours \t\t Gross" << endl;
    cout << "-------------" << endl;

    //loop through
    for (hour =30; hour <= 40; hour++)
    {
        cout << hour << "\t\t" << hourlyPay << endl;
        hourlyPay = pay * hour;
    }
}
int main()
{
    createPayChartWithFor ();
    return 0;
}
