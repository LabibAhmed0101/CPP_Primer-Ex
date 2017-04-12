/*Exercise 3.25:
Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators instead of subscripts.*/

#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> clusterOfGrades(11, 0);	//Intializing the vector with 11 element each = 0
	unsigned int grade;
	int i = 0;				//Using i to calculate the grade cluster

	cout << "Please enter the grades" << endl;
	while (cin >> grade)			//Inserting grades till the end of file (ctrl z) or non-numeric input
	{
		if (grade >= 0 && grade <= 100)		//Grade must be between 0~100 
		{
			i = grade / 10;
			vector<int>::iterator iter = clusterOfGrades.begin() + i;
			(*iter)++;
		}
		else
		{
			cout << "Please enter a valid grade (0~100)" << endl;
		}
	}
	
	//Sending the cluster to the standard output
	cout << "\nThe grade clustering :" << endl;
	for (vector<int>::const_iterator iter = clusterOfGrades.begin(); iter != clusterOfGrades.end(); ++iter)
	{
		cout << *iter << " " ;
	}
	
	cout << endl;
	return 0;
}

//vector<int>::iterator and vector<int>::const_iterator can be replaced by auto in the c++11 standard
