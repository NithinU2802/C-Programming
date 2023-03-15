/******************************************************************************

Memory Allocation for an single element...

Input:
3 
2 

Ouput: 
2

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,*t;
    scanf("%d",&a);
    if(a==3){
        t=malloc(sizeof(int));
        scanf("%d",&*t);
        printf("%d\n",*t);
    }
    return 0;
}

