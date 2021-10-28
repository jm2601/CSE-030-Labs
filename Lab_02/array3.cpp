#include <iostream>
#include <string>
using namespace std;

int main () {
    //initialize size of array and negative values in 2d arr
    int arrSize = 0;
    int negativeCount = 0;
    //ask user for size of 2d array
    cout << "Enter the size of a 2D array: ";
    //get input from user and store in variable arrSize
    cin >> arrSize;
    //if statement for errors in size of array
    if(arrSize < 0) {
        cout << "ERROR: you entered an incorrect value for the array size! " << endl;
    }
    else if (arrSize > 10) {
        cout << "ERROR: your array is too large! Enter 1 to 10. " << endl;
    }
    else {
        int array[arrSize][arrSize]; //makes 2d array n x n
        for (int i = 0; i < arrSize; i++) { //loop to repeat input of values
            cout << "Enter the values in the array for row " << i + 1 << ", separated by a space, and press enter: ";
            //i had been messing up found mistake
            //loop for going thru rows and columns
            for(int j = 0; j < arrSize; j++){ //i put 0 instead of j in (j < arrSize;)
                cin >> array[i][j]; //user input rows and colums 
                //counting the negatives
                if(array[i][j] < 0){
                    negativeCount++; //n = n + 1 because initialized at 0
                }
        }
    }
    //prints negativeCount and throws exception
    if(negativeCount == 0) {
        cout << "All values are non-negative! " << endl;
    }
    else {
        cout << "There are " << negativeCount << " negative values!" << endl;
    }
    }
    return 0;
}
