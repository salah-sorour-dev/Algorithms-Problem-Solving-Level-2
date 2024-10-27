// problem 22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

void ReadArray(int arr[100], int& arrLength)
{
	cout << "Enter number of element ? \n";
	cin >> arrLength;

	cout << "Enter array elements ?\n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}


void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (Number == arr[i]) {
			count++;
		}
	}
	return count;
}

int main()
{

	int arr[100], arrLength, NumberToCheck;

	ReadArray(arr, arrLength);

	NumberToCheck = ReadPositiveNumber("Enter the Number you want to check: ");

	cout << "\nOrigin array: ";
	PrintArray(arr, arrLength);

	cout << "\nNumber " << NumberToCheck;
	cout << " is repeated ";
	cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

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
