#include <iostream>
using namespace std;

int main()
{
	//ask user to input sizeArr
	cout << "Enter the size of the array: ";
	int sizeArr = 0;
	cin >> sizeArr;
    //output error for invalid values of sizeArr
	if (sizeArr <= 0)
	{
		cout << "\nERROR: you entered an incorrect value for the array size!";
	}
	else
	{
		int values[sizeArr];
		cout << "\nEnter the numbers in the array, separated by a space, and press enter: ";
		//user input value into array
		for (int i = 0; i < sizeArr; i++)
		{
			cin>> values[i];
		}

		//sorting but descending - including number of swaps
		int swapsNum = 0;
		for (int i = 0; i < sizeArr; i++)
		{
			int indexMax = i;
            //this is the difference between this and sortArray1
			for (int j = i+1; j < sizeArr; j++) //looking for indexMax
			{//operator switches
				if (values[j] > values[indexMax])//change operator
				{
					indexMax = j;
				}
			}
			if (i != indexMax)
			{ //swaping
				swapsNum++;
				int tempValue = values[i];
				values[i] = values[indexMax];
				values[indexMax] = tempValue;
			}
		}

		cout << "\nThis is the sorted array in descending order: ";
		//print out the sorted array and swaps
		for (int i = 0; i < sizeArr; i++)
		{
			cout << values[i] << " ";
		}
		cout << "\nThe algorithm selected the maximum for the traverse of the array.";
		cout << "\nIt took " << swapsNum << " swaps to sort the array...";
	}
}