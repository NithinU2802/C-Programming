/******************************************************************************

Understand the concept of static command....

Output:
Non static 
1 
1 

static 
1 
2 

*******************************************************************************/
#include <stdio.h>


void f(){
int k=0;
k++;
printf("%d\n",k);
}

void g(){
static int k=0;
k++;
printf("%d\n",k);
}

int main()
{
    //not static
    printf("Non static\n");
    f();
    f();
    printf("\n");
    
    //static
    printf("static\n");
    g();
    g();
    return 0;
}

