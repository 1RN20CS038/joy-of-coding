/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    printf("enter the age of the person:\n");
    scanf("%d",&age);
    
    if(age>=18)
        printf("person is eligible to vote!!\n");
    else    
        printf("person is not eligible to vote!!");
    return 0;
}

