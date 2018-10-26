/*
Exercise 4.4: 
Parenthesize the following expression to show how it is evaluated. Test your answer by compiling 
the expression (without parentheses) and printing its result.

12 / 3 * 4 + 5 * 15 + 24 % 4 / 2

( ( 12 / 3 ) * 4 ) + ( 5 * 15 ) + ( ( 24 % 4 ) / 2 )

*/
#include<iostream>

using namespace std;

int main()
{
	int x = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << "x = " << x << endl;

	return 0;

}
