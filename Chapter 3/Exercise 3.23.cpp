#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> numbers{ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	for (vector<int>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter)
	{
		*iter = 2 * (*iter);
		cout << *iter << " ";
	}

	cout << endl;	
	return 0;
}