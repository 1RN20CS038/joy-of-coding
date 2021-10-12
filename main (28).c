/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[20]={2,6,10,14,18,3,7,11,15,19};
    int position,i,n;
    
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    //printf("enter the elements\n");
    //for(i=0;i<n;i++)
       // scanf("%d",&arr[i]);
    printf("enter position of the element to be deleted\n");
    scanf("%d",&position);
    if(position>=n+1)
        printf("deletion is not possible\n");
    else
    {
        for(i=position-1;i<n-1;i++)
            arr[i]=arr[i+1];
            
        for(i=0;i<n-1;i++)
            printf("%d\t",arr[i]);
        
    }

    return 0;
}

