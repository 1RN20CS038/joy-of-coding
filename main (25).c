/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int largest1,i,n[6]={560,660,590,760,480,960};
    float largest2,flt[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    char day[6]={'M','T','W','T','F','S'};
    
    for(i=0;i<=5;i++)
    {    
        printf("%c\n",day[i]);
        printf("Mr.Int:Rs%d\n",n[i]);
        printf("Mr.Float:Rs%.2f\n",flt[i]);
    }    
    largest1=n[0];  
    for(i=1;i<6;i++)
    {   
       
        if(largest1<n[i])
        {
            largest1=n[i];
        }
    }
    printf("Mr.Int can party when he is highest paid of %d\n",largest1);
    for(i=0;i<5;i++)
    {
        largest2=flt[0];
        if(largest2<flt[i])
        {
            largest2=flt[i];
        }
        
    }
    printf("Mr.Float can party when he is highest paid of %.2f\n",largest2);
    return 0;
}




