#include<stdio.h>
#include<stdlib.h>

int a = 0, b = 0;

void change(){
	int p;
	p=a;
	a=b;
	b=p;
}

int main(void){
	scanf("%d",&a);
	scanf("%d",&b);
	
	change(a,b);
	printf("%d %d",a,b);
	return EXIT_SUCCESS;
}