/******************************************************************************

Operations on c programming....

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%p\n",&a);  // to print address 
    printf("%d\n",*&a); // to print value
    
    static int b=10;
    a++;
    const int c=0; // c++; is not possible
    
    // dynamic memory allocation a=5 here
    int *p=(int*)malloc(a*sizeof(int));
    for(int i=0;i<a;i++)
    scanf("%d",&p[i]);
    
    for(int i=0;i<a;i++)
    printf("%d ",p[i]);
    
    
    return 0;
}

