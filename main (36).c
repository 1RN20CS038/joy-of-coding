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
    char str[50],cap[50];
    int i;
    printf("enter a statement\n");
    gets(str);
    strcpy(cap,str);
    for(i=0;i<strlen(str);i++)
    {
        if(cap[i]>='A'&&cap<='z')
            cap[i]=tolower(cap[i]);
        
        else
            cap[i]=toupper(cap[i]);
    }
    printf("the input sentence is:\n ");
    puts(str);
    printf("case converted sentence:\n");
    puts(cap);
    return 0;
}
