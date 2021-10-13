/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    char str[10],ch;//="RNSIT";
    int i=0;
    printf("enter any character\n");
    do
    {
        ch=getchar();
        str[i]=ch;
        i++;
    }while(ch!='\n');
    i=i-1;
    str[i]='\0';
    for(i=0;i<9;i++)
    {
        putchar(str[i]);
    }
    return 0;
}



