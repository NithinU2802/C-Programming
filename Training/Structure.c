/******************************************************************************

Structure Implementation...

*******************************************************************************/
#include <stdio.h>
#pragma pack(2)

struct sample{
    int a;
    char b,c;
    float d;
};

int main()
{
    struct sample s1;
    scanf("%d ",&s1.a);
    scanf("%c ",&s1.b);
    scanf("%c ",&s1.c);
    scanf("%f",&s1.d);
    printf("Value available..\n");
    printf("%d\n%c\n%c\n%f",s1.a,s1.b,s1.c,s1.d);
    printf("\n%ld",sizeof(s1));
    return 0;
}

