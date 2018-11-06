/*
Exercise 4.21: 
Write a program to use a conditional operator to find the
elements in a vector<int> that have odd value and double the value of
each such element.
*/

#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> iVec = { 1,4,5,6,7,9,12 };

	cout << "The current vector elements are :" << endl;
	for (auto i : iVec)				//printing each element of the vector iVec before doubling the odd elements
	{
		cout << i << "\t";					
	}

	cout << endl;


	for (auto &i : iVec)				//doubling each odd element in iVec
	{
		i % 2 != 0 ?  i *= 2 : i ;		
	}

	cout << "Vector after duplicating the odd numbers :	" << endl;

	for (auto i : iVec)				//printing iVec after doubling the odd elements
	{
		cout << i << "\t";				
	}

	cout << endl;

	return 0;
}
