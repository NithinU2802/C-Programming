#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    char s[12];
    double r;
    sprintf(s,"%d.%d",x,y); // To string converstion
    sscanf(s,"%lf",&r); // to float conversion
    printf("%.2lf",r);
    return 0;
}
