//When the operand is a Data Type: When sizeof() is used with the data types such as int, float, char… etc it simply returns the amount of memory allocated to that data types. 
//We can use both %zu and %lu
//When the operand is an expression: When sizeof() is used with the expression, it returns the size of the expression. 
#include <stdio.h>
int main()
{
    printf("Size of int: %zu\n",sizeof(int));
    printf("Size of char: %zu\n",sizeof(char));
    printf("Size of double: %zu\n",sizeof(double));
    printf("Size of float: %zu\n",sizeof(float));
    printf("Size of long long: %zu\n",sizeof(long long));
    

    //Trying %lu

    printf("Size of int: %lu\n",sizeof(int));
    printf("Size of char: %lu\n",sizeof(char));
    printf("Size of double: %lu\n",sizeof(double));
    printf("Size of float: %lu\n",sizeof(float));
    printf("Size of long long: %lu\n",sizeof(long long));


    int a = 0;
	double d = 10.21;
	printf("%lu", sizeof(a + d));
	return 0;

    //As we know from the first case size of int and double is 4 and 8 respectively
    //a is int variable while d is a double variable. The final result will be double, Hence the output of our program is 8 by
    //I learned 1 more thing if i just write return 0 then code will not execute after it 



}