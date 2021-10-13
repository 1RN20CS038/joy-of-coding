/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char str[50];
    int length;
    printf("enter the string\n");
    
    gets(str);
    length=strlen(str);
    printf("lenght of the string=%d",length);
    return 0;
}

