// convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <sstream>
#include <iostream>

using  namespace std;

int main()
{
	string term = "100";
	int number = 100;
	int num;				// To store converted string.
	string text;			// To store converted integer.
	stringstream stream;	// To perform conversions. 

	stream << term;			// Load the string.
	stream >> num;			// Extract the integer.
	num /= 4;
	cout << "Integer value: " << num << endl;
	stream.str("");			// Empty the contents.
	stream.clear();			// Empty the bit flags.
	stream << number;		// Load the string.
	stream >> text;			// Extract the string.
	text += " Percent";
	cout << "String value: " << text << endl;
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
