/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int b,cost=0,disc;
    printf("enter the number of books required\n");
    scanf("%d",&b);
    cost=(b*10);
    if(b>0&&b<10000)
    {
         printf("no discount!!\n");
         
    }
    else if(b>10000&&b<15000)
    {   
        printf("you got 10 percent discount!!\n");
        disc=(cost*10)/100;
        cost=cost-disc;
    }    
    else if(b>15000&&b<20000)
    { 
        printf("hey!! you got 20 percent discount\n");
        disc=(cost*20)/100;
        cost=cost-disc;
    }
    printf("the total cost is Rs%d/-",cost);
    

    return 0;
}

