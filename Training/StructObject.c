/******************************************************************************

Structure object array to print employee informations....

Input:
Enter Number Of Employee: 2 
Enter Id: 01 
Enter Name: Ramesh
Enter Id: 02
Enter Name: Rajesh

Output:
01 Ramesh 
02 Rajesh


*******************************************************************************/

#include <stdio.h>

struct emp{
    int empno;
    char empname[20];
};

int main()
{
    int n;
    printf("Enter Number Of Employee: ");
    scanf("%d",&n);
    struct emp k[n];
    for(int i=0;i<n;i++){
        printf("Enter ID: ");
        scanf("%d",&k[i].empno);
        printf("Enter Name: ");
        scanf("%s",k[i].empname);
    }
    for(int i=0;i<sizeof(k)/sizeof(struct emp);i++){
        printf("%d %s\n",k[i].empno,k[i].empname);
    }
    return 0;
}

