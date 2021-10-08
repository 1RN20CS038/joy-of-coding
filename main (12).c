/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter two integers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>0&&b>0&&c>0)
    {
     if(a>b&&a>c)
      printf("%d is greater\n",a);
     else if(b>a&&b>c)
      printf("%d is greater\n",b);
     else
      printf("%d is greater\n",c);
    }
    else
      printf("invalid number is the input\n");
    
    return 0;
}


