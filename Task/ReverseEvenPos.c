/******************************************************************************

Input: 
Enter size: 8 
Enter Elements: -1 2 -4 9 -4 8 -2 9
Result: -1 9 -4 8 -4 9 -2 2 

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n],r[n],k=0;
    printf("Enter Elements: ");
    for(int i=0;i<n;i++){ 
        scanf("%d",&a[i]);
        if(a[i]>=0) r[k++]=a[i];
    }
    k--;
     printf("Result : ");
    for(int i=0;i<n;i++)
        if(a[i]>=0) a[i]=r[k--];
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    
    return 0;
}

