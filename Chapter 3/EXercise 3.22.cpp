//This program taking lines from std input and saves them into a vector of strings text
//Then convert the 1st paragraph into uppercase of the text.
//At last displaying the whole text.


#include<iostream>
#include<string>
#include<vector>
#include<cctype>		//Included to use toupper function

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> text;		//Declaring an empty vector of strings
	string word;

	while (getline(cin, word))	//Getting a line from the std input
	{
		text.push_back(word);	//Pushing each line as an element of the vector
	}
	
	//Going through the vector of strings to convert the 1st paragraph to uppercase
	//!iter->empty() Evaluated true when the element on the vector have return "Enter" value not space
	
	for (vector<string>::iterator iter = text.begin(); iter != text.end() && !iter->empty(); ++iter) 
	{
		//Going through each letter in each vector element and converting it to upper
		//Spaces are ignored
		
		for (string::iterator it = iter->begin(); it != iter->end(); ++it)
		{
			*it = toupper(*it);	//Converting the char pointed to by it to uppercase
		}
	}
	
	//Displaying all the elements of the vector
	
	for (vector<string>::iterator iter = text.begin(); iter != text.end(); ++iter)
	{
		cout << *iter << " ";
	}
	
	cout << endl;

	return 0;
}

//vector<string>::iterator @ line 30, 43 and string::iterator @ line 35 could be replaced by auto in c++11 new standard
