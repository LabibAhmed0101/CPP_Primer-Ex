/*Exercise 3.39: 
Write a program to compare two strings. Now write a
program to compare the values of two C-style character strings.*/

//a)Program to compare two strings (using string library).

#include<iostream>
#include<string>				//Includeded to use string library.

using std::cout;
using std::cin;
using std::endl;
using std::string;				//string can be used without std:: prefix.		

int main()
{
	string str1, str2;			//Declaring 2 strings.
	
	//User asked to enter two strings.
	cout << "Enter the 1st string" << endl;
	cin >> str1;			

	cout << "Enter the 2nd string" << endl;
	cin >> str2;

	if (str1 == str2)			//If two strings are equal.
		cout << "\nThe two string are equal" << endl;

	else if (str1 > str2)			//If the 1st string bigger than the 2nd string.
		cout << "\nThe 1st string is bigger than the 2nd string" << endl;

	else					//when the 1st string is smaller than the 2nd string.
		cout << "\nThe 1st string is smaller than the 2nd string" << endl;

	return 0;
}

//b)Program to compare two C-style character strings

#include<iostream>
#include<cstddef>		//Included to enable using size_t
#include<cstring>		//Included to enable using cstring function strcmp()

using std::cout;
using std::cin;
using std::endl;

int main()
{
	constexpr size_t MAX_SIZE = 100;			//Max size of the cstring

	char arr1[MAX_SIZE], arr2[MAX_SIZE];			//Declaring two arrays of characters (cstring)

	cout << "Enter the 1st string" << endl;			
	cin.getline(arr1, MAX_SIZE);

	cout << "Enter the 2nd string" << endl;
	cin.getline(arr2, MAX_SIZE);

	if (strcmp(arr1, arr2) == 0)				//strcmp returns 0 if both cstring are equal
		cout << "\nThe 1st and the 2nd string are equal" << endl;
	else if (strcmp(arr1, arr2) < 0)			//strcmp returns negative value if arr1 is smaller than arr2
		cout << "\nThe 1st string is smaller than the 2nd string" << endl;
	else							//strcmp returns positve value if arr1 is bigger than arr2
		cout << "\nThe 1st string is bigger than the 2nd string" << endl;

	return 0;
}

/*cin.getline let the user input a full line in cstring as getline() do with string
it is also much better to use than cin >> becuase with cin >> there will be over flow problem if the user input more than 99 char .

cin.getline also makes it possiable to use a delimiter instead of the default delimiter which is '\n'.
Delimiter is used to define where the cstring input stream ends by default if the user pressed enter while he inputs the string, that 
will end the stream of inputs for example :

if the user is  inputing address inside a cstring array it have to  be like that:
20
London st.
London
United Kingdom

Here the new line is a part of the string so we must use a delimiter so the stream of char won't take enter/return as the end of the 
stream. 
We can set a new delimiter instead of the default one through cin.getline(arr,MAXSIZE,'$')
the 1st argument is the cstring variable "the array of characters",
the 2nd argument is the cstring max size ,
the 3rd argument is the new delimiter so enter/return is not the current delimiter and it is now treated as any other character and the 
stream only will end when the user hits '$' user stream of iputs would be like that.

20
London st.
London
United Kingdom$

stream will end when the user type $.

*/

