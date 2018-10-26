/*
Exercise 4.6: 
Write an expression to determine whether an int value is even or odd.
*/

#include<iostream>

using namespace std;

int main()
{
	int value = 0;
	cout << "Enter a number to check if even or odd :\n" << endl;
	cin >> value;

	if (value % 2 == 0)
	{
		cout << value << " is even" << endl;
	}
	else
	{
		cout << value << " is odd" << endl;
	}

	return 0;
}
