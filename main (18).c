/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,rem1=0,sum1=0,sum2=0,rem2=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem1=num%10;
        num=num/10;
        sum1=sum1+rem1;
    }
     printf("sum of the digits of the number=%d\n",sum1);
    while(sum1!=0)
    {
        rem2=sum1%10;
        sum1=sum1/10;
        sum2=sum2+rem2;
    }
   
    printf("sum of the digits of the resultant sum=%d\n",sum2);
    return 0;
}

