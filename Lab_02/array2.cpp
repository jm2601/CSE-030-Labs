#include <iostream>
#include <string>
using namespace std;

int main() {
    //initialize string
    string line;
    //ask user for input of string
    cout << "Enter the string to reverse: ";
    getline(cin, line);
    //finds length of line - 1 because start at 0
    //print countdown from end to start
    for(int i = line.length() - 1; i >= 0; i--) {//decrement from end to start
        cout << line[i];
    }
    //i was about to make this super complicated by parsing char and rearranging an array etc
    return 0;
}