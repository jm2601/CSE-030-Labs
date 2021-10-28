#include <iostream>
using namespace std;

int main()
{
	//input array size
	cout<<"Enter the size of the array: ";
	int sizeArr = 0;
	cin >> sizeArr;
    //throws error if invalid size of array
	if (sizeArr <= 0)
	{
		cout<<"\nERROR: you entered an incorrect value for the array size!";
	}
	else
	{ //all the loops go in here to optimize run time
		int values[sizeArr];
		//input array values
		cout << "\nEnter the numbers in the array, separated by a space, and press enter: ";
		for (int i = 0; i < sizeArr; i++)
		{
			cin >> values[i];
		}
		//input target value to search for 
		cout << "\nEnter a number to search for in the array: ";
		int targetNum = 0;
		cin >> targetNum;

        //goes through array searching for target value
		bool found = false;
        //number of steps loop
		int stepsNum = 0;
		for (stepsNum = 0; stepsNum < sizeArr; stepsNum++)
		{//breaks when target value found
			if (values[stepsNum] == targetNum)
			{
				found = true;
				break;
			}
		}
		//prints results and best/worse case scenerio
		if (found)
		{
			cout << "Found value " << targetNum << " at index " << stepsNum << ", which took " <<  stepsNum+1 << " checks.";
			if (stepsNum == 0)
			{
				cout << "\nWe ran into the best case scenario!";
			}
		}
		else
		{
			cout << "\nWe ran into the worst case scenario!\n";
			cout <<"The value " << targetNum << " was not found in the array!";
		}
	}





}