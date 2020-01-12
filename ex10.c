#include<stdio.h>
#include<stdlib.h>

int fact(int n){
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
int importer(){
	int n;
	scanf("%d",&n);
	return n;
}
int main(void){
	printf("%d",fact(importer()));
	return EXIT_SUCCESS;
}
	