
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%[^\n]",s);
    char *t=strtok(s," ");
    while(t!=NULL){
        printf("%s\n",t);
        t=strtok(NULL," ");
    }
    return 0;
}
