/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,rem,rev=0,dig=0;
    printf("enter the number\n");
    scanf("%d",&num);
    
    while(num!=0)
    {
        rem=num%10;
        printf("%d\n",rem);
        num=num/10;
        dig=dig+1;
        rev=rev*10+rem;
        
    }   
    
    printf("number of digits=%d\n",dig);
    printf("reverse of the number is %d\n",rev);
    return 0;
}


