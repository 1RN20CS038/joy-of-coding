/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[20];
    int i,j,n,lenght;
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    lenght=sizeof(arr);
    for(i=0;i<lenght;i++)
    {
        for(j=i+1;j<lenght;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d is repeated\n",arr[j]);
                goto end;
            }
            
        }
    }
    printf("the group is distinct");
    end:printf("hence the group of numbers is not distinct!!\n");
    return 0;
}

