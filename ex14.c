#include<stdio.h>
#include<stdlib.h>
void ToH(int n,char x,char y,char z){
	if(n==1){
		printf("把一个盘子从");
		printf("%c",x);
		printf("移动到");
		printf("%c.\n",z);
	}
	else{
		ToH(n-1,x,z,y);
		printf("把一个盘子从");
		printf("%c",x);
		printf("移动到");
		printf("%c\n",z);
		ToH(n-1,y,x,z);
	}
}
int importer(){
	int n;
	scanf("%d",&n);
	return n;
}

int main(void){
	ToH(importer(),'A','B','C');
	return EXIT_SUCCESS;
}
