/******************************************************************************

    Sorting the elements available in the string

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void sort(char a[]){
    int n=strlen(a);
    char t;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            i=-1;
        }
    }
}

int main()
{
    char a[101];
    scanf("%s",a);
    sort(a);
    printf("%s",a);
    return 0;
}
