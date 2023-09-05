#include <stdio.h> 

int main() {
char in[1001];
printf("Enter x:y:z format Input: ");
scanf("%s",in);
int h,m,s;
if(sscanf(in,"%d:%d:%d",&h,&m,&s)==3){
    printf("Hours: %d\n",h);
    printf("Minutes: %d\n",m);
    printf("Seconds: %d\n",s);
}
}
