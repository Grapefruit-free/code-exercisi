#include<stdio.h>
#include<stdlib.h>

int importer(){
	int n;
	scanf("%d",&n);
	return n;
}

int Fib(int n){
	if(n==1)
		return 1;
	if(n==2)
		return 1;
	else
		return (Fib(n-1)+Fib(n-2));
}

int main(void){
	printf("%d",Fib(importer()));
	return EXIT_SUCCESS;
}
