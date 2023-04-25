/******************************************************************************

Dynamic Memory allocation Matrix Implementation...

Input:
3 
4 5 3 
8 3 2 
9 2 1 

Output:
4 5 3 
8 3 2 
9 2 1


*******************************************************************************/
#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d",&n);
    int **ptr=(int **) malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        ptr[i]=(int *) malloc(n*sizeof(int));
        for(int j=0;j<n;j++){
            scanf("%d",(*(ptr+i)+j));
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    return 0;
}


