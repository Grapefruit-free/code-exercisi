#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int (*p)[4];
	int i,j;
	int x;
	
	p=a;
	
	scanf("%d",&i);
	scanf("%d",&j);
	
	x=*(*(p+i)+j);
	
	printf("%d",x);
		
	return EXIT_SUCCESS;
}
