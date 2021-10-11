
#include <stdio.h>

int main()
{
    short int arr[10];
    int search,i,n,count=0;
    printf("enter the number of chits\n");
    scanf("%d",&n);
    printf("enter %d numbers\n",n);
    for(i=0;i<n;i++)
        scanf("%hi",&arr[i]);
    
    printf("enter a number to search\n");
    scanf("%d",&search);
    
    for(i=0;i<n;i++)
    {    
        if(arr[i]==search)
        {
            printf("%d is present at location %d.\n",search,i+1);
            count++;
        }
    }
    if(count==0)
        printf("%d isn't present in the chits.\n",search);
    else
        printf("%d is present %d times in the chits.\n",search,count);
        
        
    return 0;
}


