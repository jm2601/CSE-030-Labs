#include <iostream>
#include <string>
using namespace std;

int main () {
    //Step 1 - Ask user for size of array
    //initiate size of array variable
    int arraySize;

    cout << "Enter the size of the array: ";
    cin >> arraySize;
    //Step 2 - If user inputs incorrect value, output error
    //If user inputs correct value, skip to Step 3
    if (arraySize < 0) {
        cout << "ERROR: you entered an incorrect value for the array size!\n";
    }
    else if (arraySize == 0) {
        cout << " ";
    }
    //Step 3 - Ask user for #s in array, separated by a space, and press enter
    cout << "Enter the numbers in the array, separated by a space, and press enter: \n";
    //Step 4 - initialize array
    int numsArr[arraySize]; 
    for (int i = 0; i < arraySize; i++) {
        cin >> numsArr[i];
    }
    /* cout << "The numbers are: ";
    for (int n = 0; n < arraySize; ++n) {
        cout << numsArr[n] << " ";
    } */

    //this second for loop checks the array on whether its true or not
    int arraycheck = true; //set to true
    for(int j=0; j<arraySize-1; j++){ //minus 1 because deletes extra count at end because starts count from 0
        if(numsArr[j]> numsArr[j+1]){//if num in array is > num in array + 1 because counts from 0 which means next num in numsArr
        arraycheck = false;//if thats the case will = f 
        }
    }
    //This if statement puts out "This is NOT an increasing array!" if the array is detects the array not increasing
    if(arraycheck == false){ //gets == false if loop above results in false
    cout << "This is NOT an increasing array!";
    }
    //The else statement put out "This IS an increasing array!" if the array check is increasing
    else {//if true from previous loop print increasing
    cout << "This IS an increasing array!" << endl;
    }
    //cout << numsArr;
    //this just prints the numbers again
    for (int n = 0; n < arraySize; ++n) {
        cout << numsArr[n] << " ";
    }
        return 0;
    }