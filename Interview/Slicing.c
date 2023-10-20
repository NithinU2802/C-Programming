/******************************************************************************

    String and Array Slicing implemetations

*******************************************************************************/

#include <stdio.h>

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    char s[1001]="Hello World";
    swap(s+6,s+3);
    printf("%s\n",s);
    int a[3];
    a[0]=2;
    a[1]=2;
    a[2]=5;
    printf("%d",a+1);
    return 0;
}
