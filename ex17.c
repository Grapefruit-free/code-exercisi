#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a[5]={10,11,12,13,14};
	int *p = NULL;
	printf("%p\n",a);
	p = a;
	printf("%p\n",p);
	printf("%d\n",*p);
	printf("%d\n",*p++);
	printf("%d",*p++);
	return EXIT_SUCCESS;
}
