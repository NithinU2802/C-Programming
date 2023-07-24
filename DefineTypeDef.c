/******************************************************************************

    def type and #define concepts

*******************************************************************************/
#include <stdio.h>
#define name "Nithin"

typedef int Number;

int main()
{
    Number a,b;
    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);
    printf("Hi, %s\n",name);
    printf("Sum: %d\n",a+b);
    // scanf("%s",name);   name is constant variable
    // printf("Name Changed as %s",name);
    return 0;
}
