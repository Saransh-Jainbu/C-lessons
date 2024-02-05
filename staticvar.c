#include<stdio.h>
int fun()
{
static int x= 0;
x++;
return x;
}

int main()
{
printf("%d ", fun());
printf("%d ", fun());
return 0;
}

//1) A static int variable remains in memory while the program is running. A normal or auto variable is destroyed when a function call where the variable was declared is over. 
//For example, we can use static int to count a number of times a function is called, but an auto variable can’t be used for this purpose
//Static variables (like global variables) are initialized as 0 if not initialized explicitly. 
