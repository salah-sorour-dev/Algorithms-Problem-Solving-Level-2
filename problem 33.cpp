// problem 33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };

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

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;
	case enCharType::SpecialChar:
		return char(RandomNumber(33, 47));
		break;
	case enCharType::Digit:
		return char(RandomNumber(48, 57));
		break;
	}
}

string GenerateWord(enCharType CharType, short Length)
{
	string Word;
	for (int i = 1; i <= Length; i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}

string GenerateKey()
{
	string Key = "";
	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
	return Key;
}

void ReadArray(string arr[100], int& arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenerateKey();
	}
}

void PrintArray(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array [" << i << "] : " << arr[i] << endl;
	}
}



int main()
{
	srand((unsigned)time(NULL));


	string arr1[100];
	int arrLength = ReadPositiveNumber("How many keys do you want to generate ? \n");

	ReadArray(arr1, arrLength);
	cout << endl;

	cout << "Array Elements:\n\n";
	PrintArray(arr1, arrLength);
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
