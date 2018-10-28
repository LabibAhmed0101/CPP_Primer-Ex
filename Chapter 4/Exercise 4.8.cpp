/*
Exercise 4.8: 
Explain when operands are evaluated in the logical AND, logical OR, 
and equality operators.

1.AND &&
when the 1st operand (left hand side) is true the 2nd operand (right hand side will be evaluated).
if the left hand side operand is false then the right hand side operand will not be evaluated.

2.OR ||

The right hand side operand will be evaluated only if the left handside is false;

3.Equality operators ==
The equal-to operator (==) returns true if both operands have the same value.
Equal-to operator is left associated operator.

*/


#include<iostream>

using std::cout;
using std::endl;

int main()
{
	bool x = false;
	bool y = true;
	bool z = false;

	if (x == y == z)
	{
		cout << "(x = y) = z" << endl;
	}
	return 0;
}
/*

output of the previous code will be 
(x = y) = z;

although the experssion is logically wrong cuz x and y are not equal but still 
it is evaluated true and thats why:
First x == y will be evaluated to be false .
Then the evaluation of x == y (false) will be compared with z (false) ,
since both are flase then they are equal then the codition is right .
So its wrong to do such approach to compare , its better to do it using && operator.

*/

if ( x == y && y == Z)
{ }
