/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char name[50],ch;
    int i=0;
    printf("enter the name\n");
    
    do
    {
        ch=getchar();
        name[i]=ch;
        i++;
    }while(ch!='\n');
    i=i-1;
    name[i]='\0';
    printf("%s",name);
    
    return 0;
}

