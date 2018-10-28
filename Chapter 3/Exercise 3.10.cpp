/*
Exercise 3.10: 
Write a program that reads a string of characters including punctuation and
writes what was read but with the punctuation removed.
*/

#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str;
	cout << "Please Enter a string with punctuation " << endl;
	getline(cin, str);							//getline() used to be able to input 1 line not just 1 word
	string newStr;

	for (auto c : str)
	{
		if (!ispunct(c))
		{
			newStr += c;
		}
	}

	cout << "The new string without punctuation is : " << endl;
	cout << newStr << endl;

	return 0;
}
