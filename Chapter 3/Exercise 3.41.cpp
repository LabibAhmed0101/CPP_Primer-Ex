/*Exercise 3.41: 
Write a program to initialize a vector from an array of
ints.*/

#include<iostream>
#include<cstddef>				//Included to enable using size_t type
#include<vector>
#include<iterator>				//Included to enable using begin() and end() functions

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;				//Enable using begin() withs std:: prefix
using std::end;					//Enable using end() withs std:: prefix

int main()
{
	constexpr size_t ARR_SIZE = 10;				//Defining the size of the array as a constant experssion
	int arr[ARR_SIZE];					//Declaring the array of integers
	
	cout << "Enter " << ARR_SIZE << " elements to ur array" << endl;
	for(int i = 0 ; i < ARR_SIZE ; ++i)			//Inputing the element array from the user		
	{
		cin >> arr[i];
	}

	cout << endl;

	vector<int> vec(begin(arr), end(arr));			//Declaring the vector vec and intializing from arr array using begin
								//and end functions
	cout << "The Elements of the new vector are " << endl;		//Sending the elements of the vector vec to the standard output
	for (vector<int>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
		cout << *iter << " ";

	cout << endl;

	return 0;
}

//vector<int>::const_iterator can be replaced with auto in the c++11 standard.
