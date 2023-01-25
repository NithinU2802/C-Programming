/******************************************************************************

check prime number program

Input: 5
Output: Yes 

Input: 7
Output: Yes

Input: 4
Output: No

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int f=0;
    for(int i=2;i<n;i++){
        if(n%2==0){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}

