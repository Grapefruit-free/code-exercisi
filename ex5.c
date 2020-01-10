#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(void){
	int i;
	int num[N]={0};
	int cont[N]={0};
	
	for(i=0;i<N;i++){
		scanf("%d",&num[i]);
		cont[(num[i])-1]++;
	}
	for(i=0;i<N;i++){
		printf("%3d %3d\n",num[i],cont[(num[i])-1]);
	}
	return EXIT_SUCCESS;
}
