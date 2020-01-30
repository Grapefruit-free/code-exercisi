#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	
	printf("%p\n",a);
	printf("%p\n",a[0]);
	printf("%p\n",a[0]+3);
    printf("%p\n",&(a[0][3]));	
	printf("%p",a[1]);
	printf("%d",a[0][0]);
	
	return EXIT_SUCCESS;
}
