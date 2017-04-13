/*Exercise 3.32: 
Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.*/

//a) Copy array into another array:
//arrays can not be assigened or copied directly.

#include<iostream>
#include<cstddef>					//Included to enable using size_t

using std::cout;
using std::endl;

int main()
{
	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };	//Declaring and intializing the 1st array
	
	constexpr int size = 10;			//Defining a constant int to be the size of the 2nd array
	int arr2[size];					//Declaring the 2nd array with 10 elements.

	for (size_t i = 0; i < 10; ++i)			//Assinging each element in the 1st array to each element in the 2nd
		arr2[i] = arr[i];			//array.

	for (size_t i = 0; i < 10; ++i)			//Sending each element of the 2nd array to the standard output
		cout << arr2[i] << " ";

	cout << endl;
	return 0;
}

//b) Using vectors :
//vector can be normally assigned to another vector or copyied

#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1{ 10,20,30,40,50,60,70,80,90,100 };	//Declaring and intializing the 1st vector
	vector<int> v2 = v1	;				//Declaring the 2nd vector and assinging 1st vector to it.

	for (vector<int>::const_iterator iter = v2.begin(); iter != v2.end(); ++iter)
	{
		cout << *iter << " ";				//Sending elements of the 2nd vector to the standard output
	}

	cout << endl;

	return 0;
}

//vector<int>::const_iterator could be replaced by auto in the c++11 standard
//with using auto its prefered to use cbegin() and cend() which will return a constant iterator since we are not planning to
//change any element in the vector
