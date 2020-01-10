#include<stdio.h>
#include<stdlib.h>

int main(void){
	int num[10],num_impair[10],num_pair[10];
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int n = 0;
	int temp_impair = 0;
	int temp_pair = 0;
	
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<10;i++){
		if(num[i]%2 != 0){
			num_impair[j]=num[i];
			j++;
		}
		else{
			num_pair[k]=num[i];
			k++;
		}
	}
	
	for(i=0;i<j;i++){
		for(m=i+1;m<j;m++){
			if(num_impair[m]>num_impair[i]){
				temp_impair = num_impair[m];
				num_impair[m] = num_impair[i];
				num_impair[i] = temp_impair;
			}
		}
	}
	for(i=0;i<k;i++){
		for(n=i+1;n<k;n++){
			if(num_pair[n]>num_pair[i]){
				temp_pair = num_pair[n];
				num_pair[n] = num_pair[i];
				num_pair[i] = temp_pair;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%5d",num_impair[i]);
	}
	printf("\n"); 
	for(i=0;i<k;i++){
		printf("%5d",num_pair[i]);
	}
 		
	return EXIT_SUCCESS;
}
