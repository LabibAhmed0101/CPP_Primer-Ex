/*Exercise 3.40: 
Write a program to define two character arrays initialized from string literals. Now define a third character array to hold the
concatenation of the two arrays. Use strcpy and strcat to copy the two arrays into the third.*/

#include<iostream>
#include<cstring>				//Included to be able to use cstring functions
#include<cstddef>				//included to be able to use size_t

using std::cout;
using std::endl;

int main()
{
	char firstName[] = "Donald";		//Declaring and intializing an array of characters firstName
	char lastName[] = "Trump";		//Declaring and intializing an array of characters lastName
	constexpr size_t length = 50;		//Defining the lenght for array of characters fullName
	char fullName[length];			//Declaring without intializing an array of characters fullName

	strcpy(fullName, firstName);		//Copying firstName into fullName
	strcat(fullName, lastName);		//Appends lastName to fullName

	cout << fullName << endl;

	return 0;
}

/*Some compiler will mention this error "The functions strcpy and strcat are considered unsafe. consider using strcpy_s and 
strcat_s.
Functions strcpy and strcat are considered unsafe due to the fact that there is no bounds checking and can lead to buffer overflow.
by using strccpy_s or strcat_s will solve this issue because they are the safe version of strcpy and strcat.*/
