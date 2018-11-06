/*
Exercise 4.22: 
Extend the program that assigned high pass, pass, and fail
grades to also assign low pass for grades between 60 and 75 inclusive. Write
two versions: One version that uses only conditional operators; the other
should use one or more if statements. Which version do you think is easier
to understand and why?
*/

// Using conditional operators

#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	int grade = 0;
	cout << "Please enter ur current grade :";
	cin >> grade;

	cout << "\nYou got a : ";
	
	//Conditional operator to determine high pass / pass / low pass / fail
	
	cout << (grade > 90 ? "High Pass" : grade > 75 ? "Pass" : grade > 60 ? "Low Pass" : "fail") << endl;		

	return 0;
}

