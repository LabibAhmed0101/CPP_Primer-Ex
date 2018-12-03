/*
Exercise 4.31: 
The program in this section used the prefix increment and decrement operators. Explain 
why we used prefix and not postfix. What changes would have to be made to use the 
postfix versions? Rewrite the program using postfix operators.

The prefix version avoids unnecessary work. It increments the value and returns the 
incremented version.The postfix operator must store the original value so that it can 
return the unincremented value as its result. If we don’t need the unincremented value, 
there’s no need for the extra work done by the postfix operator.

For ints and pointers, the compiler can optimize away this extra work. For more 
complicated iterator types, this extra work potentially might be more costly. By habitually 
using the prefix versions, we do not have to worry about whether the performance difference matters. 
Moreover—and perhaps more importantly—we can express the intent of our programs more directly.

No changes needed to use postfix , In this code there will be no difference between using postfix 
instead of prefix 
*/

// using postfix instead of prefix

#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> iVec(10,1);
	vector<int>::size_type cnt = iVec.size();

	for (vector<int>::size_type ix = 0; ix != iVec.size(); ix++, cnt--)	//using postfix
	{
		iVec[ix] = cnt;
	}

	for (auto c : iVec)
	{
		cout << c << endl;
	}
	return 0;
}
