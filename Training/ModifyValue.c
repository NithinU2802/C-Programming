/******************************************************************************

modify value of two variable using function and pointer...

Output:
7 15

*******************************************************************************/
#include <stdio.h>

int display(int *a,int *b){
    *a+=5;
    *b+=6;
    return *a,*b;
}

int main()
{
    int a=2,b=9;
    display(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

