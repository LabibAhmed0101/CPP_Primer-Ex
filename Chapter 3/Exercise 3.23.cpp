#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> numbers{ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };	//declaring and intializing a vector of int.
	for (vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) //going through the vector using iterators
	{
		*iter = 2 * (*iter);		//assiging the new value pointed to by iter after doubling it using derefence operator.
		cout << *iter << " ";
	}

	cout << endl;	
	return 0;
}
