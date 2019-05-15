#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    ofstream outfile ("../MyFile.txt");
    outfile << "Hi" << endl;
    outfile.close();

    string word;
    ifstream infile("../MyFile.txt");
    infile >> word;
    cout << word << endl;
    infile.close();

    ofstream outfile2("outfile.txt");
    outfile << "Look at me! I'm in a file" << endl;
    int x = 200;
    outfile << x << endl;
    outfile.close();

    ofstream sals("salaries.txt");
    sals << setprecision(2);
    sals << fixed;
    sals << left;

    sals << setw(20) << "Name" << setw(10) << "salary";
    sals << endl;

    sals << "------------------- ";
    sals << "----------" << endl;
    sals << setw(20) << "Hank Williams";
    sals << setw(10) << "28422.82" << endl;

    sals << setw(20) << "Buddy Holly";
    sals << setw(10) << "39292.22" << endl;

    sals << setw(20) << "Otis Redding";
    sals << setw(10) << "43838.55" << endl;
    sals.close();
    return 0;
}
