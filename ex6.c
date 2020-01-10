#include<stdio.h>
#include<stdlib.h>
#define N 100
int main(void){
	int num[N]={0};
	int i,sum;
	
	for(i=2;i<N;i++){
		sum=i;
		if(num[sum]==0){//这个if语句为优化语句。
		    while(sum<N){
			    sum+=i;
			    if(sum<N)
		           num[sum]=1;
		    }
		}
	}
	for(i=2;i<N;i++){
		if(num[i]==0)
			printf("%3d",i);
	}
	return EXIT_SUCCESS;
}
