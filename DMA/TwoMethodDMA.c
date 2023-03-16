/******************************************************************************

Two Methods of Memory Allocation....

*******************************************************************************/
#include <stdio.h>
#include <malloc.h>

struct emp{
    int no;
    char name[30];
};

int main()
{
    struct emp *a=(struct emp*)malloc(sizeof(struct emp)),b;
    
    scanf("%d",&b.no);
    scanf("%s",b.name);
    
    scanf("%d",&a->no);
    scanf("%s",a->name);
    
    printf("%s",b.name);
    printf("%s",a->name);
    return 0;
}

