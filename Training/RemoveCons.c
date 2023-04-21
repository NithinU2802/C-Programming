/******************************************************************************

Remove consonants of the string array..


Input:
5
Nithin
Pradeep
Sunil
Mukesh
Nivas

Output:
ii 
aee 
ui 
ue  
ia  


*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Remove(char a[]){
    char r[101]="";
    for(int i=0;i<strlen(a);i++){
        char c=tolower(a[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        strncat(r,&a[i],1);
    }
    printf("%s\n",r);
}

int main()
{
    int n;
    scanf("%d",&n);
    char a[n][101];
    for(int i=0;i<n;i++)
    scanf("%s",a[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    Remove(a[i]);
    return 0;
}



