#include <iostream>
#include <string>

using namespace std;

//can ommitt namespace if you use "std" keyword 
//followed by "::" operator for string (and cout) objects

int main()
{
    int reps;
    string punishment = "I will always use object oriented programming.";
    //user input the # of times to write sentence
    cout << "Enter the number of lines for the punishment: ";
    cin >> reps;
    //incorrect answers (letters/negative#s/punctuations) response if-else statement
    if (reps < 0) {
        cout << "You entered an incorrect value for the number of lines!";
    } else {
        cout << punishment;
    }

    return 0;
}