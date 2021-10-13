/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char st1[50],st2[50];
    printf("enter the first string\n");
    gets(st1);
    printf("enter the second string\n");
    gets(st2);
    strcat(st1,st2);
    puts(st1);
    return 0;
}

