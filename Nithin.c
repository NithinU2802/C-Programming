/*************************************************

program to display my name.....

*************************************************/


#include <stdio.h>

int main()
{
    int n;
    for(int i=0;i<5;i++){
        for(int j=0;j<20;j++){
            if(j==0 || j==17 || j==6 || j==12 || (i==j) || j==4
            || (j<11 && j>=8 && i==0) || j==9 || (i==5/2 && j>12 && j<=14) || 
            j==15 ) 
            printf("*");
            else printf(" ");
        }
        for(int j=0;j<5;j++){
            if(j==0 || j==i || j==4) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
