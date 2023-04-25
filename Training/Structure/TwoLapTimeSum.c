/******************************************************************************

sum of two time period...

Input:
07 35 42 
10 40 58

Output:
18 16 40

Input:
10 6 23
2 40 3 

Output:
13 46 26

*******************************************************************************/

#include <stdio.h>

struct data{
    int hh,mm,ss;
};

int main()
{
    struct data s1,s2,res;
    scanf("%d %d %d",&s1.hh,&s1.mm,&s1.ss);
    scanf("%d %d %d",&s2.hh,&s2.mm,&s2.ss);
    int s=s1.ss+s2.ss,m=s1.mm+s2.mm,h=s1.hh+s2.hh,t;
    res.ss+=(s%60);
    t=s/60;
    res.mm+=((m+t)%60);
    t=m/60;
    res.hh+=((h+t)%60);
    printf("%d %d %d",res.hh,res.mm,res.ss);
    return 0;
}


