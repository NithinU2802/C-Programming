#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a,b=0,l=1,r,c=0,m;
scanf("%d",&n);a=(n*3)-2;r=(n/2)+1;m=n-2;
for(int i=0;i<n;i++){c++;
for(int j=0;j<b;j++){
    printf("-");
}
if(i==(n/2)){
printf("0");
l=0;
}
else{
if(c%2!=0){
    for(int j=l;j<l+r;j++){
        printf("%d",j);
        if(j<(l+r)-1)
        printf("-");
    }}
    else{
        for(int j=r+l-1;j>=l;j--){
            printf("%d",j);
            if(j>l)
            printf("-");
        }
    }
    for(int j=0;j<m;j++){
        printf("-");
    }
    if(c%2!=0){
        for(int j=(l+r)-1;j>=l;j--){
            printf("%d",j);
            if(j>l)
            printf("-");
        }
    }else{
        for(int j=l;j<l+r;j++){
            printf("%d",j);
            if(j<(l+r)-1)
            printf("-");
        }
    }}
    m= i<(n/2)?m-2:m+2;
    c= i==(n/2) ?-1:c;
    l =l+r;
    r=i<(n/2) ? r-1:r+1;
    b=i<(n/2) ? b+3:b-3;
    a= i<(n/2) ? a-3:a+3;printf("\n");
}
}
