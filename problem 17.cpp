// problem 17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ReadPassword(string Message)
{
	string password;
	cout << Message;
	cin >> password;

	return password;
}

bool  GeussLetter(string password)
{
	string word = "";
	int counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				counter++;

				cout << "Trial[" << counter << "] : " << word << endl;

				if (word == password)
				{
					cout << "\nPassword is " << word << endl;
					cout << "Found After " << counter << " Trial(s)." << endl;
					return true;
				}
				word = "";
				
			}
		}
	}
}

int main()
{
	GeussLetter(ReadPassword("Please Enter 3-Letter Password (All Capital)? "));

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
