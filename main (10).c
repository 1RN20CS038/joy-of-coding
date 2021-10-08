/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    printf("enter the age of the person:\n");
    scanf("%d",&age);
    
    age>=18?printf("person is eligible to vote!!"):printf("person is not eligible to vote");

    return 0;
}

