/******************************************************************************

Declare a variable Globally....

*******************************************************************************/
#include <stdio.h>

int a;

void display(){
    a=9;
    printf("%d\n",a);
}

int main()
{
    scanf("%d",&a);
    printf("%d\n",a);
    display();
    return 0;
}

