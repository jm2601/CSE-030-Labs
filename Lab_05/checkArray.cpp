#include <iostream>
#include <fstream>
using namespace std;

int checkArraySort(string*, int);

int main()
{
	ifstream file_in;
	file_in.open("words_in.txt");
	int num_lines = -1; //Last line of text file is empty string, offset with -1.
	while (file_in.eof() == false)
	{
		//Only wants to work if I call getline
		string output;
		getline(file_in,output);
		num_lines++;
	}
	file_in.close();
	file_in.open("words_in.txt");
    //pointer
	string* p_words = new string[num_lines];

	for (int i = 0; i < num_lines; i++)
	{
		getline(file_in, p_words[i]);
	}
	file_in.close();

	int result = checkArraySort(p_words, num_lines);
	if (result == -1)
		 cout << "\nThe Array is sorted in descending order!";
	if (result == 1)
		 cout << "\nThe Array is sorted in ascending order!";
	if (result == 0)
		 cout << "\nThe Array is not sorted!";

}
//function
int checkArraySort(string* A, int array_size)
{
	bool ascending = true;
	bool descending = true;
	for (int i = 1; i < array_size; i++)
	{
		if (A[i] <= A[i-1])
		{
			 ascending = false;
		}
		if (A[i] >= A[i-1])
		{
			descending = false;
		}
	}
	if (ascending)
		return 1;
	if (descending)
		return -1;
	return 0;
}