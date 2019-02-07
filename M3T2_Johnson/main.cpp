#include <iostream>

using namespace std;

void createpayChartWithFor()
{
    cout << "This is the pay chart using for" << endl;
}
void createPayChartWithWhile()
{
    cout << "This is the pay chart using while" << endl;
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
    while (hour <= 40)
    {
        cout << hour << "\t\t" << hourlyPay << endl;
        hourlyPay = pay * hour;
        hour++;
    }
}
int main()
{
  // print the user's hours worked and total gross pay
  //using a for loop
  createPayChartWithWhile ();

  // print the user's hours worked and total gross pay
  //using a while loop

    return 0;
}
