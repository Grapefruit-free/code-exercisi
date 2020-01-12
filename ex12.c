#include<stdio.h>
#include<stdlib.h>

int importer(){
	int n;
	scanf("%d",&n);
	return n;
}
int cut(int n){
	if(n==0)
		return 1;
	else
		return (cut(n-1)+n);
}

int main(void){
	printf("%d",cut(importer()));
	return EXIT_SUCCESS;
}