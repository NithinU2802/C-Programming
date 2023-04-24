/******************************************************************************

Union Implementation...

Input:
4 
k 

Output:
Value available..
107
k 
4 

*******************************************************************************/
#include <stdio.h>
#pragma pack(2)

union sample{
    int a;
    char b;
};

int main()
{
    union sample s1;
    scanf("%d ",&s1.a);
    scanf("%c",&s1.b);
    printf("Value available..\n");
    printf("%d\n%c",s1.a,s1.b);
    printf("\n%ld",sizeof(s1));
    return 0;
}

s