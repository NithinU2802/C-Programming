#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n=16;
	
	// square root and cube root
	printf("Sqrt and Cbrt: %f %f\n",cbrt(n),sqrt(n));
	
	// ceil and floor
	float a=4.7,b=-4.5,c=4.3;
	printf("Ceil: %f %f %f\n",ceil(a),ceil(b),ceil(c));
	printf("Floor: %f %f %f\n",floor(a),floor(b),floor(c));
	
	// abs and fabs
	int d=-45;
	printf("abs: %d\n",abs(d));
	printf("fabs: %f\n",fabs(b));
	
	// log, log10 and log2 
	printf("Log , Log10, Log2 : %f %f %f\n",log(a),log10(a),log2(a));
	
	// fmod
	float x=2.0;
	printf("fmod:%f\n",fmod(a,x));
	
	// sin, cos and tan 
	printf("Sine, Cose, and tangent: %f %f %f\n",sin(90),cos(0),tan(60));
	
	// asin, acos and atan
	printf("Cosine, secant and cotangent: %f %f %f\n",asin(0),acos(0),atan(45));
	
	return 0;
}
