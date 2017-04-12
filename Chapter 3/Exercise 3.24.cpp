#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> numbers;
	int number;
	
	cout << "Enter a set of numbers" << endl;
	while (cin >> number)		//Inserting number into the vector of number till the end of fine (ctrl z)
	{
		numbers.push_back(number);
	}
	cout << endl;

	if (numbers.begin() < numbers.end())	//To be sure that the vector isn't empty
	{
		cout << "The sum of each pair of adjacent elements" << endl;
		//sum of each pair till the the second tolast
		//Last element cant be included because no other element after it to be added to
		for (vector<int>::const_iterator iter = numbers.begin(); iter != numbers.end() - 1; ++iter)
		{
			cout << *iter + *(iter + 1) << " ";
		}
		cout << endl;

		//The sum of the first and last elements, followed by the sum of the second 
		//and second - tolast, and so on.

		int i = 1;
		cout << "\nThe sum of the first and last element..." << endl;
		for (vector<int>::const_iterator iter = numbers.begin(); iter != numbers.end() - numbers.size() / 2; ++iter)
		//Going through the vector till we reach the half of it
		{
			if (iter < numbers.end() - i)	//if vector size is even
			{
				cout << *iter + *(numbers.end() - i) << " ";
				i++;
			}
			else				//if vector size is odd the middle element will be sent to the output
			{
				cout << *iter << endl;
			}
		}
	}
	
	return 0;
}
