#include<stdio.h>
int main(){
    const int x=5;
    x=x+1;
    printf("The value of x is %d\n",x);
    return 0;

}

//This will show error as const function only gives read only perm to x , not edit perms