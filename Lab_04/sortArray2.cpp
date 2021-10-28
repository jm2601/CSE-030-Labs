#include <iostream>
using namespace std;

void sortArr (int, int[], int);

int main()
{
	//ask user input array size
	cout << "Enter the size of the array: ";
	int array_size = 0;
	cin >> array_size;
	//error if incorrect values
	if (array_size <= 0)
	{
		cout << "\nERROR, enter a correct size for the array";
	}
	else
	{
		int values[array_size];
		cout << "\nEnter the numbers in the array, separated by a space, and press enter: ";
		//user input array values
		for (int i = 0; i < array_size; i++)
		{
			cin>> values[i];
		}
		//ask for ascending and descending order
		cout << "Sort in ascending (0) or descending (1) order?";
		int order = -1;
		cin >> order;
		//calls function sortArr
		sortArr (order, values, array_size);
		cout << "This is the sorted array in ";
		if (order == 0) cout << "ascending order: ";
		else cout << "descending order: ";

		//output sorted array
		for (int i = 0; i < array_size; i++)
		{
			cout << values[i] <<  " ";
		}

	}
}
//no return value so void
void sortArr(int order, int values[],  int size)
{
		//insertion sort 
		for (int i = 0; i < size; i++)
		{
			int saved_value = values[i];
			int j = i;
			if (order == 0)
			{
				while (j > 0 && values[j-1] > saved_value)
				{
					int temp = values[j];
					values[j] = values[j-1];
					values[j-1] = temp;
					j--;
				}
			}
			if (order == 1)
			{// switch > to < 
				while (j > 0 && values[j-1] <  saved_value)
				{
					int temp = values[j];
					values[j] = values [j-1];
					values[j-1] = temp;
					j--;
				}
			}
			//values[j] = saved_value;
		}
	}