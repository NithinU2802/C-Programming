/******************************************************************************

Strrev Operation....

Implementation works only on Turbo C or other offline compilers

As a note strrev does not works on online Compilers...

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],r[100];
    scanf("%s",a);
    
    // input string and reverse it
    strcpy(r,a);
    strrev(r);
    if(strcmp(r,a)==0) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}

