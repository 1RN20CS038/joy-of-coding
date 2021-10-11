/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n[6]={560,660,590,760,480,960};
    float flt[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    char day[6]={'M','T','W','T','F','S'};
    
    for(i=0;i<=5;i++)
    {    
        printf("%c\n",day[i]);
        printf("Mr.Int:Rs%d\n",n[i]);
        printf("Mr.Float:Rs%.2f\n",flt[i]);
    }    
    printf("\nREVERSE OREDER\n");
    for(i=5;i>=0;i--)
    {
        printf("%c\n",day[i]);
        printf("Mr.Int:Rs%d\n",n[i]);
        printf("Mr.Float:Rs%.2f\n",flt[i]);
    }

    return 0;
}



