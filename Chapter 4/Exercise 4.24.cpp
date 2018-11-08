Exercise 4.24: 
Our program that distinguished between high pass, pass,
and fail depended on the fact that the conditional operator is right
associative. Describe how that operator would be evaluated if the operator
were left associative.

First the conditional operator is a ternary operator so it have 3 operands
expr1 ? expr2 : expr3

exper1 , expr2 , expr3 are the 3 operands of the conditional operator (?:)

so when we nest a conditional operator within another condition operator like

finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";

it should be known that the conditionl operator is right associative which 
means that its 3 operands will be groupped from right to left like that

finalgrade = (grade > 90) ? "high pass" : ((grade < 60) ? "fail" : "pass");

the 3 operands of the main conditional operator

1.(grade > 90)				//expr1 is the 1st operand
2."high pass"				//expr2 is the 2nd operand , will be evaluated ONLY WHEN expr1 is true
3.((grade < 60) ? "fail" : "pass")	//expr3  is the 3rd operand , will be evaluated ONLY WHEN expr1 is false

notice that 3rd operand will be ONLY EVALUATED if the 1st operand is false

so if grade is not bigger than 90 then skipp the 2nd operand and go to 3rd operand
of the main conditionl operator  which will decide between "fail" or pass". which the 
program should normally do.

			============================
			
if conditonal operator (?:) is left associative so the groupping of 

finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";

will be like 

finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";







#include<iostream>
#include<string>

using namespace std;

int main()
{
	int grade = 0;
	string finalGradeRightAssociative;
	string finalGradeLeftAssociative;
	

	for (size_t i = 0; i < 3; i++)
	{
		cout << "Enter your grade : ";
		cin >> grade;

		//operands grouped from right to left

		finalGradeRightAssociative = (grade > 90) ? "high pass"
			: ((grade < 60) ? "fail" : "pass");

		//operands grouped from left to right

		finalGradeLeftAssociative = ((grade > 90) ? "high pass"
			: (grade < 60)) ? "fail" : "pass";



		cout << "\nFinal grade when Right associated (normally) : " << finalGradeRightAssociative << endl;
		cout << "\nFinal grade when Left associated	     : " << finalGradeLeftAssociative << endl;
	}
	return 0;
}
