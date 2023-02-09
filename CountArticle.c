/******************************************************************************

Count article is, in, the and a in the given sentence....

Input: I want a dog which is in the street

Output: 4 

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%[^\n]",s);
    char *t=strtok(s," ");
    int c=0;
    while(t!=NULL){
        if(strcmp(t,"is")==0 || strcmp(t,"in")==0 || strcmp(t,"the")==0 || strcmp(t,"a")==0) c++;
        t=strtok(NULL," ");
    }
    printf("%d",c);
    return 0;
}
