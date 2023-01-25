/******************************************************************************

Simple calculator make basic operations.

Input: 1 + 2
output: 3

Input: 5 * 4
output: 20

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    switch(c){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("Invalid operator");
    }
}
