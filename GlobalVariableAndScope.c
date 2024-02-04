#include <stdio.h>
int x; //Global variable by default is not specified value will be 0
int main(){
    int y=2; //local variable if value is not specified it will result undefined error
    printf("Value of x is :  %d\n",x);
    printf("Value of y is : %d",y);
    return 0;
}