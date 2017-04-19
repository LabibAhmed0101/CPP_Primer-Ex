/*Exercise 3.39: 
Write a program to compare two strings. Now write a
program to compare the values of two C-style character strings.*/

//a)Program to compare two strings (using string library).

#include<iostream>
#include<string>				//Includeded to use string library.

using std::cout;
using std::cin;
using std::endl;
using std::string;				//string can be used without std:: prefix.		

int main()
{
	string str1, str2;			//Declaring 2 strings.
	
	//User asked to enter two strings.
	cout << "Enter the 1st string" << endl;
	cin >> str1;			

	cout << "Enter the 2nd string" << endl;
	cin >> str2;

	if (str1 == str2)			//If two strings are equal.
		cout << "\nThe two string are equal" << endl;

	else if (str1 > str2)			//If the 1st string bigger than the 2nd string.
		cout << "\nThe 1st string is bigger than the 2nd string" << endl;

	else					//when the 1st string is smaller than the 2nd string.
		cout << "\nThe 1st string is smaller than the 2nd string" << endl;

	return 0;
}

//b)Program to compare two C-style character strings
