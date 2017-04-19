/*Exercise 3.37: 
What does the following program do?*/

const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while (*cp) {
	cout << *cp << endl;
	++cp;
}

/*This piece of code will send the characters in ca[] to the standard output till it finds a null character '\0' it will stop .
Since our cstring does not have a null character then garabage values will be sent to the output untill the 1st '\0' null character
is found.*/
