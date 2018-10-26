/*
Exercise 4.7: 
What does overflow mean? Show three expressions that will overflow.

Overflow happens when a value is computed that is outside the range of values that the type can represent.

1. short max value = 32767

*/

short value = 32767 ;
++ value ;
cout << "value = "  << value << endl;

/*
The value won't be equal to 32768 cuz of overflow so the result will be a wrapped around to be -32768
*/

/*
2. unsigned int can't be negative value .
*/

unsigned int value = 0 ;
value -= 1;
cout << "value = " << value << endl;

/*
Instead of getting -1 value will be unexpected value cuz unsigned int can't have negative value .
*/

/*
3. int max value = 2147483647.
*/

int value = 2147483647;
value += 1;
cout << "value = " << value << endl;

/*
int max range in positve is 2147483647 so if we added 1  to that value there will be a wrap around .
*/
