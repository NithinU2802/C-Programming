/******************************************************************************

Make Null pointer...........


Output:

BEFORE NULL 
1122989612
1122989612
AFTER NULL 
0
1122989612

*******************************************************************************/
#include <stdio.h>

int main()
{
    int *f,t;
    f=&t;
    printf("BEFORE NULL\n");
    printf("%d\n",f);
    printf("%d\n",&t);
    f=NULL;
    printf("AFTER NULL\n");
    printf("%d\n",f);
    printf("%d\n",&t);
    return 0;
}

