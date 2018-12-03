/*
Exercise 4.33: 
Using Table 4.12 (p. 166) explain what the following expression does:

someValue ? ++x, ++y : --x, --y

the comma operator got the lowest precedence of all operators so this code precedence should
be like that :

(someValue ? ++x, ++y : --x) , --y

The left-hand expression of the comma operator (,) is evaluated and its result is discarded. 
The result of a comma expression is the value of its right-hand expression
*/

//program shows how comma discard its left operands and returns only its right hand operand

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x = 1, y = 8, z = 16;
	cout << (++x, ++y, ++z) << endl;		// x and y and z all increased by 1 but cout will only print the value of z
							// because comma operator will discard all the left hand operand and returns
							// only its right hand operand
							
	cout << x << " " << y << " " << z << endl;
	
	return 0;
}


if someValue is evaluated as true then will evaluate ++x and ++y then  evaluate --y
if someValue is evaluated as false then evaluate --x then evaluate --y

Notice how --y will be always evaluated nomatter someValue is true or false cuz its not a part of the condition operator (?:)

