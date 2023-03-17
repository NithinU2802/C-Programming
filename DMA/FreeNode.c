/******************************************************************************

Run this code to understand the concept of free command...


Output:
First Record:
Adno: 10
Name: Raj

free(): invalid pointer  // represent the node is not available...

*******************************************************************************/
#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct student{
    int adno;
    char name[40];
    struct student *t;
};

int main()
{
    struct student a,c,d,*r;
    a.adno=10;
    strcpy(a.name,"Raj");
    c.adno=12;
    strcpy(c.name,"Kumar");
    
    printf("First Record:\n");
    printf("Adno:" );
    printf("%d\n",a.adno);
    printf("Name: ");
    printf("%s\n\n",a.name);
    
    a.t=&c;
    r=a.t;
    free(r);
    
    printf("Second Record:\n");
    printf("Adno: ");
    printf("%d\n",r->adno);
    printf("Name: ");
    printf("%s\n\n",r->name);
    
    return 0;
}

