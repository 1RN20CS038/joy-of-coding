/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int rank;
   printf("enter the CET rank of the student\n");
   scanf("%d",&rank);
   if(rank>=1&&rank<=3250)
        printf("student is eligible to get seat in any branch of RNSIT\n");
   else if(rank>3250&&rank<=6505)
        printf("student is eligible to get seat in ISE,EC,MEC of RNSIT\n");
   else if(rank>6505&&rank<=12012)
        printf("student is eligible to get seat in EC,MEC of RNSIT\n");
   else if(rank>12012&&rank<=22340)
        printf("student is eligible to get seat in EC,MEC of RNSIT\n");
   else
        printf("admission is not possible at RNSIT:(\n");
    return 0;
}

