/*Exercise 3.35: 
Using pointers, write a program to set the elements in an
array to zero.*/

#include<iostream>
#include<cstddef>				//including cstddef header to be able to use size_t

using std::cout;
using std::endl;

int main()
{
	constexpr size_t size = 10;		//setting the size of the array to 10 and it is a constant experssion 
	int arr[size];				//decalring an array without intializing it 
						//currently the array have 10 elements that have garabage values
						
	int *pArr = arr;			//pArr pointer equal the 1st element in the array address

	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)			//using subscript operator with  pArr to set elements of arr with index < 5 to 0
			pArr[i] = 0;
		else				//using pointer arithmetics and dereferencing to set the rest of elements  to 0 
			*(pArr + i) = 0;
	}

	for (int i = 0; i < 10; ++i)		//Sending each element of arr to the standard output
		cout << arr[i] << " " ;		//arr[i] can be also replaced with pArr[i] or *(pArr + i)

	cout << endl;

	return 0;
}
