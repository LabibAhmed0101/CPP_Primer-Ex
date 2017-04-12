/*Exercise 3.27: 
Assuming txt_size is a function that takes no arguments and returns an int value, which of the following definitions are illegal?
Explain why.

unsigned buf_size = 1024;
(a) int ia[buf_size];
(b) int ia[4 * 7 - 14];
(c) int ia[txt_size()];
(d) char st[11] = "fundamental";*/

//(a)
int ia[buf_size] ;		//Illegal  because buf_size is not a constant or constant expression

//(b)
int ia[4 * 7 - 14];		//Legal because 4 * 7 - 14 evaluted on compile time as constant expression

//(c)
int ia[txt_size()];		//If txt_size() return a constant expression its legal otherwise it's illegal

//(d)
char st[11] = "fundamental";	//Illegal , when intializing array of char from a string literal the size should consider adding
				// \0 "null character" to the end of the string . so the size should be 12 becuase fundamentals is
				//11 character so,1 more character needed for \0.
