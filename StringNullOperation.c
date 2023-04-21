/******************************************************************************

Reduce String towards the end...

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s",s);
    s[4]='\0';
    int n=strlen(s);
    printf("%d",n);
    return 0;
}

