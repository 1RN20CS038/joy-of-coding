/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[11]={2,6,10,14,18,3,7,11,15,19};
    int x,position,n,i;
    printf("number of array elements to be entered\n");
    scanf("%d",&n);
    //printf("enter the array elements\n");
    //for(i=0;i<n;i++)
    //{
       //scanf("%d",&arr[i]);
    //}    
    printf("mention its position that it has to be inserted\n");
    scanf("%d",&position);
    printf("enter the number to inserted\n");
    scanf("%d",&x);
    n++;
    for(i=n-1;i>=position-1;i--)
        arr[i]=arr[i-1];
       
    
    arr[position-1]=x;
   
    for(i=0;i<=n-1;i++)
        printf("%d\t",arr[i]);
    
    return 0;
}


