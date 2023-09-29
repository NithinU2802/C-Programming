#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int x,y;
    scanf("%[^\n] %d %d",s,&x,&y);
    int n=strlen(s);
    for(int i=0;i<x;i++)
        printf("%c",s[i]);
    printf("\n");
    for(int i=x;i<y;i++)
        printf("%c",s[i]);
    printf("\n");
    for(int i=n-y;i<strlen(s);i++)
        printf("%c",s[i]);
    printf("\n");
    return 0;
}
