/******************************************************************************

performing backspace operation for the char - and delever the required string...

Input: 
skill----rack

Output:
srack 


Input:
ab---d-monky-ey

Output:
monkey


Input:
sdk---file----

Output:
-1


*******************************************************************************/
#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    char r[1001]="";
    int n=strlen(s)-1,c=0;
    for(int i=n;i>=0;i--){
        if(s[i]=='-') c++;
        else if(c<=0) strncat(r,&s[i],1);
        else c--;
    }
    n=strlen(r)-1;
    if(n==-1){
        printf("-1");
        return 0;
    }
    strcpy(s,"");
    for(int i=n;i>=0;i--) strncat(s,&r[i],1);
    printf("%s",s);
}
/******************************************************************************

performing backspace operation for the char - and delever the required string...

Input: 
skill----rack

Output:
srack 


Input:
ab---d-monky-ey

Output:
monkey


Input:
sdk---file----

Output:
-1


*******************************************************************************/
#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    char r[1001]="";
    int n=strlen(s)-1,c=0;
    for(int i=n;i>=0;i--){
        if(s[i]=='-') c++;
        else if(c<=0) strncat(r,&s[i],1);
        else c--;
    }
    n=strlen(r)-1;
    if(n==-1){
        printf("-1");
        return 0;
    }
    strcpy(s,"");
    for(int i=n;i>=0;i--) strncat(s,&r[i],1);
    printf("%s",s);
}
