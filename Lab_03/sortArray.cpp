#include <iostream>
using namespace std;

int main()
{
	//ask user for size of array
	cout << "Enter the size of the array: ";
	int sizeArr = 0;
	cin >> sizeArr;
    //throws errors if invalid value for sizeArr
	if (sizeArr <= 0)
	{
		cout << "\nERROR: you entered an incorrect value for the array size!";
	}
	else
	{
        //ask user to input values 
		int values[sizeArr];
		cout << "\nEnter the numbers in the array, separated by a space, and press enter: ";
		//user inputs values
		for (int i = 0; i < sizeArr; i++)
		{
			cin>> values[i];
		}

		//selection sort - ascending order
		for (int i = 0; i < sizeArr; i++)
		{
			int indexMin = 0;

			for (int j = 1; j < sizeArr - i; j++)
			{
				if (values[j] > values[indexMin])
				{
					indexMin = j;
				}
			}
			int tempValue = values[sizeArr-i-1];
			values[sizeArr-i-1] = values[indexMin];
			values[indexMin] = tempValue;
		}

		cout << "This is the sorted array in ascending order: ";
		//prints out the sorted array
		for (int i = 0; i < sizeArr; i++)
		{
			cout << values[i] << " ";
		}
		cout << "\nThe algorithm selected the minimum for the traverse of the array.";
	}
}