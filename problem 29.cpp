// problem 29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0) {
			return enPrimeNotPrime::NotPrime;
		}
	}
	return enPrimeNotPrime::Prime;
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

void CopyArray(int arrSource[100], int arrDistination[100], int arrLength, int& arr2Length)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
		{
			arrDistination[Counter] = arrSource[i];
			Counter++;
		}
	}
	arr2Length = --Counter;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arrLength;

	ReadArray(arr1, arrLength);
	cout << endl;

	int arr2[100], arr2Length = 0;
	CopyArray(arr1, arr2, arrLength, arr2Length);

	cout << "Array 1 Elements:\n";
	PrintArray(arr1, arrLength);
	cout << endl;

	cout << "\nArray 2 Elements after copy:\n";
	PrintArray(arr2, arr2Length);
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
