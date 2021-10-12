/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[20],freq[50];
    int i,j,n,lenght,count=1;
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {   
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[i]=0;
            }
            
        }
        if(freq[i]!=0)
        {    
            freq[i]=count;
        }    
    }
    printf("occurance of each element\n");
    for(i=0;i<n;i++)
    {   
        if(freq[i]!=0)
        {
            printf("%d : %d\n",arr[i],freq[i]);
        }
    
    }
    return 0;
}

