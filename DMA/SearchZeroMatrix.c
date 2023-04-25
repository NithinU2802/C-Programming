/******************************************************************************

Search 0 in a given dma matrix...

Input:
3 4 
1 2 6 7
3 5 0 8 
9 0 -3 -1
Output:
(1,2)

*******************************************************************************/
#include <stdio.h>
#include <malloc.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int **a=(int **)malloc(r*sizeof(int *));
    for(int i=0;i<r;i++){
        a[i]=(int *)malloc(c*sizeof(int));
        for(int j=0;j<c;j++){
        scanf("%d",*(a+i)+j);
        }
    }
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        if(*(*(a+i)+j)==0){
            printf("(%d,%d)",i,j);
            return 0;
        }
    return 0;
}

