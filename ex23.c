#include<stdio.h>
#include<stdlib.h>

void Max(int (*p)[4]){
	int max = p[0][0];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(p[i][j]>max)
				max = p[i][j];
		}
	}
	
	printf("%d",max);		
}
	
	
int main(void){
	int a[3][4]={1,2,3,4,11,22,33,44,5,6,7,8};
	Max(a);
	return EXIT_SUCCESS;
}
