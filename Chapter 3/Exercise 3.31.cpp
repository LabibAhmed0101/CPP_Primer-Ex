/*Exercise 3.31: 
Write a program to define an array of ten ints. Give each element the same value as its position in the array.*/

#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int arr[10];				//Declaring an array of 10 ints

	for (size_t i = 0; i < 10; ++i)		//Assinging array index values  to its element
		arr[i] = i;
	

	for (size_t i = 0; i < 10; ++i)		//Sending the array to the std output.
		cout << arr[i] << " ";
	
	cout << endl;
	return 0;
}
