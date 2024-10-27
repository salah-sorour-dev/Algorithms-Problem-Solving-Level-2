// problem 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void ReadArray(int arr[100], int& arrLength)
{
	cout << "\nEnter Number of elements ?\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int MaxNumberInArray(int arr[100], int arrLength)
{
	int Max = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] > Max) {
			Max = arr[i];
		}
	}
	return Max;
	 
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	ReadArray(arr, arrLength);
	cout << endl;

	cout << "Array Elements: ";
	PrintArray(arr, arrLength);
	cout << endl;

	cout << "Max Number is: ";
	cout << MaxNumberInArray(arr, arrLength);
	cout << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
