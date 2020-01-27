#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a[10],*p = NULL,*q = NULL,temp;

	for(p=a;p<a+10;p++){
		scanf("%d",p);
	}
	for(p=a,q=a+9;p<q;p++,q--){
		temp = *p;
		*p = *q;
		*q = temp;
	}
	for(p=a;p<a+10;p++){
		printf("%3d",*p);
	}

	return EXIT_SUCCESS;
}
