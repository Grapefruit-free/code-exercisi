#include<stdio.h>
#include<stdlib.h>

int main(void){
	int num[10];
	int i,j,temp;
	
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}

	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(num[j]>num[i]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
				
	for(i=0;i<10;i++){
		printf("%5d",num[i]);
	}		
	return EXIT_SUCCESS;
}
