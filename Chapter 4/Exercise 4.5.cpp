/*
Exercise 4.5: 
Determine the result of the following expressions.

(a) -30 * 3 + 21 / 5 = -90 + 4 = -86

21 / 5 will be equal 4  not 4.2 because the new standard requires the quotient to be rounded toward
zero (i.e., truncated) since the devision is between to integers .
For the result not to be rounded one of the operands should have a decimal point  on it like :
21.0 / 5 = 4.2

*/


#include<iostream>

using namespace std;

int main()
{
	float x = -30 * 3 + 21 / 5 ;			// 21 / 5 will be evaluted as 4 and it is rounded to zero
	cout << "x = " << x << endl;

	return 0;

}

/*
Though x is declared as a float variable the answer is still -86 thats because both operands of the 
division expression are integers 21 , 5 .
so to be able to get the result without any rounding code should be like that.
*/
#include<iostream>

using namespace std;

int main()
{
	float x = -30 * 3 + 21.0 / 5 ;			// 21.0 / 5 will be evaluted as 4.2 (21.0 is a decimal not integer anymore)
	cout << "x = " << x << endl;

	return 0;					//x here will be equal -85.8

}

/*
if in the previous code x is declared as int type result will be -85 cuz int will truncate the final answer 
from the decimals . And 21.0 / 5 = 4.2.
So -90 + 4.2 = -85.8
and since the type of x is int the answer will be  -85 not -85.8 cuz int will truncate the decimal.
*/
#include<iostream>

using namespace std;

int main()
{
	int x = -30 * 3 + 21.0 / 5 ; 			// x is declared as int
	cout << "x = " << x << endl;

	return 0;					// x here will be equalt to -85

}

/*
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

(b) -30 + 3 * 21 / 5 = -30 + 63 / 5 = -30 + 12 = -18


(c) 30 / 3 * 21 % 5 = 10 * 21 % 5  = 210 % 5 = 0 


(d) -30 / 3 * 21 % 4 = -10 * 21 % 4 = -210 % 4 = -2

Result here = -2  becasue 
m % (-n) is equal to m % n , and (-m) % n is equal to -(m % n).

*/
