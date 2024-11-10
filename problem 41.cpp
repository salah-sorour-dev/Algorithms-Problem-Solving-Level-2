// problem 41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
void FillArray(int arr[100], int& arrLength)
{
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

bool IsPalindromeArray(int arr[100], int Length)
{
	for (int i = 0; i < Length; i++) {
		if (arr[i] != arr[Length - i - 1])
		{
			return false;
		}
		return true;
	}
}

int main()
{
	int arr[100], Length = 0;
	FillArray(arr, Length);

	cout << "\nArray Elements:\n";
	PrintArray(arr, Length);

	if (IsPalindromeArray(arr, Length))
		cout << "\nYes, Array is Palindrome.\n";
	else
		cout << "\nNo, Array is NOT Palindrome.\n";
    
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

