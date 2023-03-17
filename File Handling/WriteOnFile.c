/******************************************************************************

create and write data in a file...

Input:
Enter Name: Nithin

Output:
krct.txt //inside file 
Nithin

file available where the program saved and also we can specify location...

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *t;
    char tt[30];
    t=fopen("krct.txt","w"); // can make changes in location...
    printf("Enter Name: ");
    scanf("%s",tt);
    fprintf(t,"%s",tt);
    fclose(t);
    return 0;
}


