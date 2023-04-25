/******************************************************************************

Check whether the given date is leap year or not...

Input:
29 02 2012

Output:
Leap Year 

*******************************************************************************/
#include <stdio.h>

struct day{
    int date,month,year;
};

int main()
{
    struct day d;
    scanf("%d %d %d",&d.date,&d.month,&d.year);
    if(d.date!=29 || d.month!=2)
        printf("Not a Leap Year");
    else if(d.year%400==0)
        printf("Leap Year");
    else if(d.year%100==0)
        printf("Not a Leap Year");
    else if(d.year%4==0)
        printf("Leap Year");
    else 
        printf("Not a Leap Year");
    return 0;
}

