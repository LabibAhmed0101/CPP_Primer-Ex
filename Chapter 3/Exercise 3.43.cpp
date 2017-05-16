/*Exercise 3.43:
Write three different versions of a program to print the elements of ia. One version should use a range for to manage the iteration, the 
other two should use an ordinary for loop in one case using subscripts and in the other using pointers. In all three programs write all 
the types directly. That is, do not use a type alias, auto, or decltype to simplify the code.
*/
#include<iostream>
#include<cstddef>			//For using size_t
#include<iterator>			//For using begin / end 

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	//Creating the ia array
	constexpr size_t row = 3, coloumn = 4;
	int ia[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	
	//Using range for 
	cout << "Using range for" << endl;
	for (int(&r)[4] : ia)					//r is a reference to array of 4 integers "rows"
	{
		for (int c : r)					//c go through each int in r "coloumns"
			cout << c << " ";

		cout << endl;					//New line after each row
	}

	//Using for with subscipt Operator
	cout << "\n\nUsing for with subscript Operator" << endl;
	for (int i = 0; i < row; ++i)				//Loop for each row
	{
		for (int j = 0; j < coloumn; ++j)		//Loop through each coloum at the current row
			cout << ia[i][j] << " ";
		
		cout << endl;					//New line after each row
	}

	//Using for with pointers
	cout << "\n\nUsing for with pointers" << endl;
	//Loop for each row
	for (int(*p1)[4] = ia; p1 < ia + 3; ++p1)		//p1 is a pointer to array of 4 integers = the first row in ia
	{							//ia + 3 is 1 after the end of ia so the loop go through the whole array
		//Loop for each coloumn
		for (int *p2 = *p1; p2 < *p1 + 4; ++p2)		//p2 is a pointer to integer = the first element in p1
			cout << *p2 << " ";			//Derefencing p2

		cout << endl;
	}
	
	//Using for with begin/end
	cout << "\n\nUsing for with begin/end" << endl;
	for (int(*p1)[4] = begin(ia); p1 != end(ia); ++p1)	//begin(ia) returns a pointer to the 1st row
	{							//end(ia) returns a pointer to 1 after the end of ia
		for (int *p2 = begin(*p1); p2 != end(*p1); ++p2)	//begin(*p1) returns a pointer to int 
		//end(*p1) returns a pointer to 1 after the end of *p1
			cout << *p2 << " ";

		cout << endl;
	}

	return 0;
}
