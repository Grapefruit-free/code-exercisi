#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a = 3;
	int b = 7;
	int *p1 = NULL;
	int *p2 = NULL;
	int *temp = NULL;
	
	p1 = &a;
	p2 = &b;
	if(*p1<*p2){
		temp = p1;
		p1 = p2;
		p2 = temp;
	}
	printf("%d %d",*p1,*p2);
	return EXIT_SUCCESS;
}