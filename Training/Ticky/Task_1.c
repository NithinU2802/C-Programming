#include <stdio.h>

int a;

int main()
{
    typedef int i; 
    i a=3,b=10;
    printf("%*d\n",a,b);
    printf("\"I am String\"\n");
    for(int i=0;i<sizeof(a++);i++)
        printf("Integer\n");
    printf("%d",a);
    
    return 0;
}
