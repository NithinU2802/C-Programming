#include <stdio.h>
#include <string.h>


int main()
{
    
 long n,c=0;
 scanf("%ld",&n);
 long b = 0;
 long i = 1;
 while(n>0){
 b=(b*10)+(n%2);
 n/=2;
 i*=10;
}
while(b!=0){
    if((b%10)==1) c++;
    b/=10;
}
printf("%ld",c);
 
}
