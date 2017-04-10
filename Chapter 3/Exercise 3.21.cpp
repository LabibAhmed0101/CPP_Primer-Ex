#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

//vector<int>::iterator at line 14 and 19 can be replaced buy auto in c++11 new standard.

int main()
{
	vector<int> numbers{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };		//Declaring and intializing a vector
	
	for (vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) //Going through the vector using iterator
	{
		*iter *= *iter;		//Squaring the value iter pointing to
	}
	
	for (vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter)
	{
		cout << *iter << " ";	//sending the value pointed to by iter to the std output
	}

	cout << endl;
	return 0;
}
