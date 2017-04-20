/*Exercise 3.40: 
Write a program to define two character arrays initialized from string literals. Now define a third character array to hold the
concatenation of the two arrays. Use strcpy and strcat to copy the two arrays into the third.*/

#include<iostream>
#include<cstring>
#include<cstddef>	

using std::cout;
using std::endl;

int main()
{
	char firstName[] = "Donald";
	char lastName[] = "Trump";
	constexpr size_t length = 50;
	char fullName[length];

	strcpy(fullName, firstName);
	strcat(fullName, lastName);

	cout << fullName << endl;

	return 0;
}

/*Some compiler will mention this error "The functions strcpy and strcat are considered unsafe. consider due to the fact that there is no bounds checking and can lead to buffer overflow.
