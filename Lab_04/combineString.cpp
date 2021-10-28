#include <iostream>

using namespace std;

string combineStr(string, int);

int main() {
    string value;
    int num_of_times;
    /*cout << "\nEnter a string: ";
    cin >> value;
    cout << "\nEnter a number of times: ";
    cin >> num_of_times;*/
    while (true) {
        cout << "\nEnter a string: ";
        cin >> value;
        cout << "\nEnter a number of times: ";
        cin >> num_of_times;
        if (num_of_times <= 0) break;
        else {
            cout << "The resulting string is: " + combineStr(value, num_of_times);
        }
    }
    
    
    //combineStr();
    /*combineStr("Liam"); // call the function 
    combineStr("Jenny");
    */
}

//call the function combineStr
//not void because we want return to be string
string combineStr(string String, int num_of_times) {
    string string_out = "";
    //gonna need a for loop here to reiterate the string by times
    for (int i = 0; i < num_of_times; i++) {
        string_out += String;
    }
    return string_out;
    //gonna need cout the resulting string
    //cout << 
    //cout << Str << "I just got executed!\n";
}
