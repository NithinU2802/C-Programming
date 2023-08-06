/******************************************************************************

                Conversions in c program

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char _int[101]="89";
    char _float[101]="9.8";
    char _long[101]="983983983922";
    
    printf("String conversions:\n");
    // String conversions ( String to x )
    printf("%d\n",atoi(_int));
    printf("%f\n",atof(_float));
    printf("%ld\n",atol(_long));
    
    
    printf("\nSprintf conversions: \n");
    // Usage of sprintf conversions (x to string)
    
    // int to string
    int a=atoi(_int);
    char r[101];
    sprintf(r,"%d",a);
    printf("%s\n",r);
    
    // float to string 
    float b=atof(_float);
    sprintf(r,"%f",b);
    printf("%s\n",r);
    
    // long to string 
    long c=atol(_long);
    sprintf(r,"%ld",c);
    printf("%s\n",r);
    
    printf("\nExplicit Conversion:\n");
    // Explicit Type Conversion
    printf("%f\n",(float)a);
    printf("%d\n",(int)b);
    
    return 0;
}
