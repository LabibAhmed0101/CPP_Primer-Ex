/*Exercise 3.42: 
Write a program to copy a vector of ints into an array of
ints.*/

#include<iostream>
#include<vector>	

using std::cout;
using std::endl;
using std::vector;    

int main()
{
	vector<int> vec = { 1,2,3,4,5,6,7,8,9,10 };		//Declaring and intializing a vector 

	constexpr size_t ARR_SIZE = 10;				//Defining the array size
	int arr[ARR_SIZE];					//Declaring the array

	int i = 0;						//Declaring and intializing counter for the array elements
	for (vector<int>::const_iterator iter = vec.begin() ; iter != vec.end() && i < ARR_SIZE; ++iter, ++i)
	{
		arr[i] = *iter;					//Each element in the vector assigned to the correspondant element in the
	}							//array

	cout << "The current array elements are " << endl;
	for (int i = 0; i < ARR_SIZE; ++i)			//Sending the array elements to the output
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}
//code from line 19 to line 23 could be replaced using subscript operator with vectors :

for(int i = 0 ; i < Arr_SIZE : ++i)
{
	arr[i] = vec[i];
}

//vector<int>::const_iterator could be replace with auto in the c++11 standard.
