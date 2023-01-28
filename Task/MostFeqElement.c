/******************************************************************************

Input:
Enter Size: 10
Enter Elements: 3 2 5 4 2 4 4 3 2 1 

Output: 
result: 2 


*******************************************************************************/

#include <stdio.h>


void sort(int *a,int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            i=-1;
        }
    }
}

int main()
{
    int n;
    int k=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    int m=0,c=0,r=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) c++;
        else{
            if(m<c){ 
                m=c;
                r=a[i];
            }
            c=0;
        }
    }
    printf("Result: %d",r);
    return 0;
}

