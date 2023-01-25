/******************************************************************************

Check prime numbers which is factor of given number.

Input: 12
Output: 2 3

*******************************************************************************/

#include <stdio.h>
enum check {f=0,t=1};
_Bool isprime(int n){
    if(n<=1) return f;
    for(int i=2;i<n;i++)
    if(n%i==0) return f;
    return t;
    
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0 && isprime(i))
            printf("%d ",i);
    }
    // float a=10.8,b=11.40;
    // //scanf("%f %f",&a,&b);
    // for(float i=a;i<=b;i+=0.1) printf("%.2f ",i);
    // return 0;
}

