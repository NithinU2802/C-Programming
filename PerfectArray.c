/******************************************************************************

Given an array a of length n, tell us whether it has a non-empty subsequence such 
that the product of its elements is not a perfect square. A sequence b is a subsequence
of an array a if b can be obtained from a by deleting some (possibly zero) elements.
Input
The first line of the input consists of an integer n denoting the length of the array a.
The next line consists of n space- separated integers a1, a2, …, an denoting the 
elements of the array a.

Constraints
1 ≤ n ≤ 100
1 ≤ ai ≤ 104
Output
If there's a subsequence of a whose product isn't a perfect square, print "Yes". 
Otherwise, print "No".



Example
Sample Input 1
3
1 5 4
Sample Output 1
Yes

Sample Input 2
2
100 10000
Sample Output 2
No

*******************************************************************************/
#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library

int sqr(long n){
 long i=1;
 while(n>0){
     n-=i;
     i+=2;
 }   
 return n==0;
}

int main() {
    int n;
    scanf("%d",&n);
    long a[n],s=0;
    for(int i=0;i<n;i++)
    scanf("%ld",&a[i]);
    for(int i=0;i<(1<<n);i++){
        s=1;
        int f=0;
        for(int j=0,k=1;j<n;j++,k<<=1)
        if(i&k){
            s*=a[j];
            f=1;
        }
        if(f==1 && !sqr(s)){
            printf("Yes");
            return 0;
        }     
    }
    printf("No");

}
