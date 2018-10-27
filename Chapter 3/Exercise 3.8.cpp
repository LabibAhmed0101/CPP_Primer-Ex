/*
Exercise 3.8: Rewrite the program in the first exercise, first using a while
and again using a traditional for loop. Which of the three approaches do
you prefer and why?

*/

//using while.
#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str("password");

	int i = 0;

	while (i < str.size())
	{
		str[i] = 'X';
		++i;
	}

	cout << "new str is " << str << endl;	

	return 0;
}

//using for

#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str("password");

	for (int i = 0; i < str.size(); ++i)
	{
		str[i] = 'X';
	}

	cout << "new str is " << str << endl;

	return 0;
}

