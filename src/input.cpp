//============================================================================
// Name        : input.cpp
// Author      : Pavlo Sukiasyan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string text = "Hello ";
	cout << text << endl;

	cout << "Enter your name:" << flush;
	string input;
	cin >> input;
	cout << "You entered: " << input << endl;

	cout << "Enter the number: " << endl;
	int value;
	cin >> value;
	cout << "You entered number: " << value << endl;

	return 0;
}
