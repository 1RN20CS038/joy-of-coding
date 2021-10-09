/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,sum=0,rem=0;
    printf("enter the number\n");
    scanf("%d",&num);
    
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+(rem+1);
        
    } 
    if(num==0)
        printf("%d",num+1);
    else    
        printf("the increased sum=%d",sum);
    return 0;
}


