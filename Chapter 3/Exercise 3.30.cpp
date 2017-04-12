//Exercise 3.30: 
//Identify the indexing errors in the following code:

constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
ia[ix] = ix;

//index error @ 
ix <= array_size;

//Because array got 10 elements to it's index must be between 0 ~ 9 so the right way to do it is:
ix < array_size;
/*There is no such element in */ ia[10] /* and the last element of the array is */ ia[9];
