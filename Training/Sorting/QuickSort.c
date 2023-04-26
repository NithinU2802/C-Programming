/******************************************************************************

QuickSort Implementation.....

Input:
5
3 5 2 1 4 
Output:
1 2 3 4 5

Input:
8 
38 74 27 2 2 94 93 7 
Output:
2 2 7 27 38 74 93 94

*******************************************************************************/

#include <stdio.h>

int pivot(int a[],int s,int e){
    int p=s;
    int i=s,j=e,t;
    while(i<j){
        while(a[i]<=a[p]) 
        i++;
        while(a[j]>a[p])
        j--;
        if(i<j){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    t=a[j];
    a[j]=a[p];
    a[p]=t;
    return j;
}

void quicksort(int a[],int s,int e){
    if(s<e){
        int p=pivot(a,s,e);
        quicksort(a,s,p-1);
        quicksort(a,p+1,e);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}

