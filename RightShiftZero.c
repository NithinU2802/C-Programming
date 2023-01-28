/******************************************************************************

Input: 
Enter size: 4 
Enter Elements: 1 0 4 0

output:
Result: 0 0 1 4

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Size: ");
    scanf("%d",&n);
    int a[n],k=0,r[n];
    printf("Enter Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==0) k++;
    }
    for(int i=0;i<k;i++) r[i]=0;
    //k++;
    for(int i=0;i<n;i++)
        if(a[i]!=0) r[k++]=a[i];
    printf("Result: ");
    for(int i=0;i<n;i++) printf("%d ",r[i]);
    return 0;
}

