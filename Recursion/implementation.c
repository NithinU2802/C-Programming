/******************************************************************************

Implementation of recursion...

*******************************************************************************/

#include <stdio.h>

void fun(int a){
    if(a<=10)
    printf("%d\n",a);
    fun(a+1);
}

void check(int a){
    if(a%11==0)
    printf("Stopped");
    else{
        printf("%d",a);
        check(++a);
    }
}

int main()
{
    int a=5;
    printf("\nfun Function:\n");
    fun(a++);
    printf("\ncheck Function:\n");
    check(5);
    return 0;
}

