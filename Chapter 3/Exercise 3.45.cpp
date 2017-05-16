/*Exercise 3.45: 
Rewrite the programs again, this time using auto.
*/
#include<iostream>
#include<cstddef>			
#include<iterator>			

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
		for (int c : r)					
			cout << c << " ";

		cout << endl;				
	}

	//Using for with subscipt Operator
	cout << "\n\nUsing for with subscript Operator" << endl;
	for (size_t i = 0; i < row; ++i)				
	{
		for (size_t j = 0; j < coloumn; ++j)			
			cout << ia[i][j] << " ";

		cout << endl;						
	}

	//Using for with pointers
	cout << "\n\nUsing for with pointers" << endl;
	//Loop for each row
	for (auto p1 = ia; p1 < ia + 3; ++p1)			//p1 type will be deduced using auto
	{							
								
		for (auto p2 = *p1; p2 < *p1 + 4; ++p2)		//p2 type will be deduced using auto
			cout << *p2 << " ";			

		cout << endl;
	}

	//Using for with begin/end
	cout << "\n\nUsing for with begin/end" << endl;
	for (auto p1 = begin(ia); p1 != end(ia); ++p1)			//p1 type will be deduced using auto
	{							
		for (auto p2 = begin(*p1); p2 != end(*p1); ++p2)	//p2 type will be deduced using auto		
			cout << *p2 << " " ;											

		cout << endl;
	}

	return 0;
}

//auto can not be used at line 22 because if used it will return a pointer to int
/*thats why we used "&" reference operator to avoid the normal array to pointer conversion for example

int main()
{
	//creating 2 dimension array
	constexpr size_t row = 3, coloumn = 4;
	int ia[row][coloumn] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	auto p = ia;					//p will be here a pointer to integer
	
	//The compiler understand ia as the address of the first element in the array ia
	// so p = ia means  p = the address of the 1st element in ia which is also an array 
	// this inner array to the compiler = to the address of its 1st element which is an integer
	// so p will be evaluted as a pointer to int .
	
	cout << p << endl;
	cout << *p << endl;
	cout << **p << endl;
	return 0;
}*/


