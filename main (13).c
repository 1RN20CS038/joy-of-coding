/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>


int main()
{
   int opd1,opd2,result;
   char oper;
   printf("enter the operator required for specific operation:\n");
   scanf("%c",&oper);
   
   printf("enter 2 operand:\n");
   scanf("%d%d",&opd1,&opd2);
   
   switch(oper)
   {
       case '+':
                result=opd1+opd2;
                break;
       case '-':
                result=opd1-opd2;
                break;
       case '*':
                result=opd1*opd2;
                break;
       case '%':
                result=opd1%opd2;
                break;
       case '/':
               if(opd2==0)
               {
                   printf("infinity\n");
                 exit(0);
               } 
               else 
                 result=opd1/opd2;
                 break;
       default:printf("invalid operator\n");
                 exit(0);
                
       
   }
   printf("result of the operation is=%d",result);
   return 0;
}


