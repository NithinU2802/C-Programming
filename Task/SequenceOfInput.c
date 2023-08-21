#include <stdio.h>

int main()
{
    int n,c=0;
    // ctrl+d to close the interface
    while(scanf("%d",&n)>0){
        if(n%2!=0)
            c++;
    }
    printf("%d",c);
    return 0;
}
