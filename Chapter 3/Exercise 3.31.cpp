/*Exercise 3.31: 
Write a program to define an array of ten ints. Give each element the same value as its position in the array.*/

#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int arr[10];				//Declaring an array of 10 ints

	for (size_t i = 0; i < 10; ++i)
		arr[i] = i;			//Assinging array index values  to its element
	

	for (size_t i = 0; i < 10; ++i)		//Sending the array to the std output.
		cout << arr[i] << " ";
	
	cout << endl;
	return 0;
}

//size_t makes sure that the counter is big enough to hold all array elements.
//unsigned int could be used but its preferable to use size_t for counters.
