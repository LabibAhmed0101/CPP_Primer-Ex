/*
Exercise 4.28: 
Write a program to print the size of each of the built-in types.
*/

#include<iostream>

using std::cout;
using std::endl;

int main()
{
	cout << "\t\t Boolean Type " << endl;
	cout << "\nThe size of bool type is : " << sizeof(bool) << " byte/s " << endl;

	cout << "\n\n\t\t Char Type " << endl;
	cout << "\nThe size of char type is : " << sizeof(char) << " byte/s " << endl;

	cout << "\n\n\t\t Integers Types " << endl;
	
	cout << "\nThe size of short type is : " << sizeof(short) << " byte/s " << endl;
	cout << "\nThe size of int type is : " << sizeof(int) << " byte/s " << endl;
	cout << "\nThe size of long type is : " << sizeof(long) << " byte/s " << endl;
	cout << "\nThe size of long long type is : " << sizeof(long long) << " byte/s " << endl;


	cout << "\n\n\t\t Floating Point types " << endl;

	cout << "\nThe size of float type is : " << sizeof(float) << " byte/s " << endl;
	cout << "\nThe size of double type is : " << sizeof(double) << " byte/s " << endl;
	cout << "\nThe size of long double type is : " << sizeof(long double) << " byte/s " << endl;

	return 0;
}
