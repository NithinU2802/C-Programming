/******************************************************************************

Convert Float into String using c programming...!

Input : 123.4567
Output :123.457

Input : 12345.6789
Output : 12345.7

*******************************************************************************/

#include<stdio.h>

int main(){
    float x;
    scanf("%f",&x);
    char s[101];
    gcvt(x,6,s);
    printf("%s\n",s);
    return 0;
}
