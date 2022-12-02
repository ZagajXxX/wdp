// ConsoleApplication8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int second(int arg[], int lenght) {
	int largest, secondlargest;
	if (arg[1] > arg[0]) {
		largest = arg[1];
		secondlargest = arg[0];
	}
	else { 
		largest = arg[0];
		secondlargest = arg[1]; }
	for (int j = 2; j < lenght; j++)
	{
		if (largest < arg[j])
		{
			secondlargest = largest;
			largest = arg[j];
		}
		else if (arg[j] > secondlargest && arg[j] < largest)
		{
			secondlargest = arg[j];
		}

	}
		return secondlargest;
}

int main()
{
	int arr[20];
	srand(time(NULL));

	int lenght = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size(arr); i++)
	{
		arr[i] = rand() % 101;
		cout << arr[i] << " ";
	}
	cout << second(arr, lenght) << endl;
}

