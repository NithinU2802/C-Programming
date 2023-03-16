/******************************************************************************

Dynamic Memory Allocation program to get employee details...

*******************************************************************************/
#include<malloc.h>
#include <stdio.h>

struct emp{
    int empno;
    char name[20];
};

int main()
{
    struct emp *t;
    t=(struct emp*)malloc(sizeof(struct emp));
    printf("Empno: ");
    scanf("%d",&t[0].empno);
    printf("Name: ");
    scanf("%s",t[0].name);
    printf("Empno: %d\n",t[0].empno);
    printf("Name: %s",t[0].name);
    return 0;
}

