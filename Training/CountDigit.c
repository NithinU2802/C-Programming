/******************************************************************************

print largest number among three numbers.

Input: 123457
output: 6

Input: 1123
output: 4

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int c=0;
    while(a>0){
        c++;
        a/=10;
    }
    printf("%d",c);
}
