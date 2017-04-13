/*Exercise 3.33: 
What would happen if we did not initialize the scores array in the program on page 116?

scores will be having undefined -garabage- values since it is declared inside a function. */


int arr[10] ;			//Declared array with 10 elements have 0 value because it's defined outside main, or any other
				//function.
int main()
{
int arr1[10] = {};		//Declared and defualt intialized array of int which have 10 elements have 0 value.
int arr2[10]			//Declared and unintialized array have 10 elements have undefined values.
}
