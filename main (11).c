/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b;
   printf("enter two integers\n");
   scanf("%d%d",&a,&b);
   if(a>0&&b>0)
    if(a>b)
     printf("%d is largest",a);
    else
     printf("%d is largest",b);
   else
     printf("invalid input!!");
    return 0;
}


