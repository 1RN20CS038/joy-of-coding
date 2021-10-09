/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int num,rem1=0,rem2=0,rev=0;
   printf("enter the codeword(digits)\n");
   scanf("%d",&num);
   while(num!=0)
   {
       rem1=num%10;
       num=num/10;
       rev=rev*10+rem1;
   }
   while(rev!=0)
   {
       rem2=rev%10;
       rev=rev/10;
       if(rem2==9)
        printf("0");
       else
        printf("%d",rem2+1);
   }
       
   

    return 0;
}

