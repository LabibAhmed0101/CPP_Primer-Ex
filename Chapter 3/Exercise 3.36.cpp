/*Exercise 3.36: 
Write a program to compare two arrays for equality. Write a similar program to compare two vectors.*/

//a)Comparing two arrays for equality.
#include<iostream>

using std::endl;
using std::cout;

int main()
{
	//Declaring and intializing two arrrays
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };			
	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	//Finding the size of the two arrays
	int arrLength = (sizeof(arr) / sizeof(int));	//sizeof func. will return the number of bytes that arrays taking in memory
	int arr2Length = (sizeof(arr2) / sizeof(int));	//then divide it by the sizeof(int) which is equal 4 bytes.

	if (arrLength == arr2Length)			//If both arrays have the same size
	{
		for (int i = 0; i < arrLength; ++i)	//Comparing each element in the 2 arrays for equality
		{
			cout << arr[i] << " " << arr2[i] << endl;
			if (arr[i] != arr2[i])
			{
				cout << "The 2 arrays are not equal " << endl;
				return -1;	//Ending  the program if any element found different between the 2 arrays
			}
		}
		cout << "The 2 arrays are equal" << endl;	//Only if the program didn't end before that line
	}
	else						//Since the 2 arrays doesn't have the same size then they are not equal
		cout << "The 2 arrays are not equal" << endl;

	return 0;
}

//b)Coparing two vectors for equality.
#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	//Declaring 2  vectors of int
	vector<int> v1{1,2,3,4,5,6,7,8,9,10};
	vector<int> v2{1,2,3,4,5,6,7,8,9,10};

	if (v1 == v2)		// == operator can be used with vectors to compare for equality
		cout << "The 2 vectors are equal" << endl;
	else
		cout << "The 2 vectors are not equal" << endl;
	return 0;
}
