// problem 30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int ReadPostiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void ReadArray(int arr[100], int& arrLength)
{

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

void Sum2ArraysElements(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrSum[100];
	int arrLength = ReadPostiveNumber("How many elements ? \n");

	ReadArray(arr1, arrLength);
	ReadArray(arr2, arrLength);

	Sum2ArraysElements(arr1, arr2, arrSum, arrLength);


	cout << "\nArray 1 Elements:\n";
	PrintArray(arr1, arrLength);
	cout << endl;

	cout << "\nArray 2 Elements:\n";
	PrintArray(arr2, arrLength);
	cout << endl;

	cout << "\nSum of array1 and array2 elements:\n";
	PrintArray(arrSum, arrLength);
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
