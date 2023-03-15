/******************************************************************************

String Operations copy, concat, compare has been executed.

Input:
Hi Weclome

Output:
Hi 
WeclomeHi
EQUAL
NOT EQUAL

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main(){
    char f[20],v[20];
    scanf("%s",f);
    // strcpy
    strcpy(v,f);
    printf("%s\n\n",v);
    
    //concat
    char c[20];
    scanf("%s",c);
    strcat(c,v);
    printf("%s\n\n",c);
    
    //string compare
    printf("v=%s\n",v);
    printf("f=%s\n",f);
    printf("c=%s\n",c);
    strcmp(v,f)==0?printf("EQUAL\n\n"):printf("NOT EQUAL\n\n");
    strcmp(v,c)==0?printf("EQUAL\n\n"):printf("NOT EQUAL\n\n");
    //else printf("NOT EQUAL\n\n");
    
}

