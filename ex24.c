#include<stdio.h>
#include<stdlib.h>

int *get(int arr[][4],int i,int j){
	int *pt;
	pt = *(arr+i-1)+j-1;
	return (pt);
}

int main(void){
	int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int *p;
	int x,y;
	
	scanf("%d",&x);
	scanf("%d",&y);
	p=get(a,x,y);
	printf("%d",(*p));
	return EXIT_SUCCESS;
}
