#include <iostream>

using namespace std;

int main()
{
    string movieName;
    char firstLetter;
    firstLetter = 'M';
    string year;
    string rating;
    rating = 7.1;

    cout << "enter name of your movie" << endl;
    getline (cin, movieName);
    cout << "What year was it released" << endl;
    getline (cin, year);
    cout << "What is the rating" << endl;
    getline (cin, rating);


    cout << "The movie you enter is named " << movieName << endl;
    cout << "it was released in " << year << endl;
    cout << "It has an IMDB rating of " << rating << endl;
    cout << "I would file this movie under " << firstLetter << endl;
    return 0;
}
