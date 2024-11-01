// problem 40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
	arrLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;
	}
	return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

void CopyDistinctNumbersToArray(int arrSource[100], int arrDistinct[100], int arrSourceLength, int& arrDistinctLength)
{
	for (int i = 0; i < arrSourceLength; i++)
	{
		if (!IsNumberInArray(arrSource[i], arrDistinct, arrDistinctLength))
		{
			AddArrayElement(arrSource[i], arrDistinct, arrDistinctLength);
		}
	}
}

int main()
{

	int arrSource[100], arrSourceLength = 0,arrDistinct[100], arrDistinctLength = 0;

	FillArray(arrSource, arrSourceLength);

	cout << "\nArray 1 Elements:\n";
	PrintArray(arrSource, arrSourceLength);

	CopyDistinctNumbersToArray(arrSource, arrDistinct, arrSourceLength, arrDistinctLength);

	cout << "\nArray 2 Distinct Elements:\n";
	PrintArray(arrDistinct, arrDistinctLength);

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
