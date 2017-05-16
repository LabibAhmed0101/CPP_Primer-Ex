/*Exercise 3.44: 
Rewrite the programs from the previous exercises(3.43) using a type alias for the type of the loop control variables.
*/

#include<iostream>
#include<cstddef>
#include<iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

using int_array = int[4];					//int_array is type alias for array of 4 integers

int main()
{
	constexpr size_t row = 3, coloumn = 4;
	int ia[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	//Using range for 
	cout << "Using range for" << endl;
	for (int_array &r: ia)					//r is a reference to array of 4 integers "rows"
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
	for (int_array *p1 = ia; p1 < ia + 3; ++p1)		//p1 is a pointer to array of 4 integers = the first row in ia
	{							
								
		for (int *p2 = *p1; p2 < *p1 + 4; ++p2)		
			cout << *p2 << " ";			

		cout << endl;
	}

	//Using for with begin/end
	cout << "\n\nUsing for with begin/end" << endl;
	for (int_array(*p1) = begin(ia); p1 != end(ia); ++p1)		//p1 is pointer to array of four integers	
	{							
		for (int *p2 = begin(*p1); p2 != end(*p1); ++p2)
															
			cout << *p2 << " ";

		cout << endl;
	}

	return 0;
}

//type alias enhance the code readability and understanding when using pointers.
