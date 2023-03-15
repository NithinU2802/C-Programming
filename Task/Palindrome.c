/******************************************************************************

Check Palindrome by make an function....

Output: Palindrome

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void ispalindrome(char s[]){
    int i=0,j=strlen(s)-1;
    while(j>i){
        if(s[i++]!=s[j--]){
        printf("Not Palindrome");
        return;
        }
    }
    printf("Palindrome");
}

int main()
{
    ispalindrome("abba");
    return 0;
}

