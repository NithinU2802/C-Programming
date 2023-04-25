/******************************************************************************

sum of time taken by given task...


Input:
2
07 35 42 
10 40 58

Output:
0 18 16 40

Input:
2
17 35 42 
10 40 58

Output:
1 4 16 40

Input:
5 
10 34 54 
21 34 43
22 43 54
1 23 54
2 34 54

Output:
Day:2 Hour:10 Minute:52 Seconds:19


*******************************************************************************/
#include <stdio.h>

struct data{
    int hh,mm,ss,dd;
};

int main()
{
    struct data res;
    int n;
    scanf("%d",&n);
    struct data s1[n];
    res.dd=0;
    res.hh=0;
    res.mm=0;
    res.ss=0;
    for(int i=0;i<n;i++){
    scanf("%d %d %d",&s1[i].hh,&s1[i].mm,&s1[i].ss);
    int s=s1[i].ss+res.ss,m=s1[i].mm+res.mm,h=s1[i].hh+res.hh,t;
    res.ss=(s%60);
    t=s/60;
    res.mm=((m+t)%60);
    t=m/60;
    res.hh=((h+t)%24);
    res.dd+=t;
    }
    printf("Day:%d Hour:%d Minute:%d  Seconds:%d",res.dd,res.hh,res.mm,res.ss);
    return 0;
}
