#include <stdio.h>
 
int main()
{
    int b = 17, c = 18;
    char a1 = 'J';
    printf("Character value : %c\n", a1);
    printf("Integer value : %d\t%d\n", b, c);
    return 0;
}


// %c is a format specifier for character values. When printf() encounters this specifier, it expects a character argument (e.g., a char variable) and it will print the value of this argument as a character.
// %d is a format specifier for integer values. When printf() encounters this specifier, it expects an integer argument (e.g., an int variable) and it will print the value of this argument as a decimal number.
// \t basically insert some space
// \n  is used to move the cursor to next line