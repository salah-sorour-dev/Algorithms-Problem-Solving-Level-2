// problem 36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
	int Number;
	cout << "\nPlease Enter a Number? ";
	cin >> Number;
	return Number;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

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

void CopyArray(int arrSource[100], int arrDistination[100], int arrLength, int& arrDistinationLength)
{
	for (int i = 0; i < arrLength; i++)
		AddArrayElement(arrSource[i], arrDistination, arrDistinationLength);
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength, arr2Length = 0;

	ReadArray(arr, arrLength);
	cout << endl;


	int arr2[100];
	CopyArray(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements:\n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 Elements after copy:\n";
	PrintArray(arr2, arr2Length);

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
