/*********************************************************************

Input: 5

Output:
        *
      *A*A
    *A*A*A*A
  *A*A*A*A*A*A
*A*A*A*A*A*A*A*A


*********************************************************************/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=-1;i<n;i++){
        if(i==-1){
            for(int i=0;i<n;i++) printf("  ");
            printf("* ");
            printf("\n");
            continue;
        }
        for(int j=0;j<n;j++){
        if((n-i-1)<=j) printf("*A");
        else printf("  ");
        }
        for(int j=0;j<n;j++){
            if(j<=i) printf("*A");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
