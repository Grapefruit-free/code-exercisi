#include<stdio.h>
#include<stdlib.h>
#include"max.h"

int main(void){
	
	double a,b;
	scanf("%lf",&a);
	scanf("%lf",&b);
	
	printf("%lf",max(a,b));
	return EXIT_SUCCESS;
}
