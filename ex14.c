#include<stdio.h>
#include<stdlib.h>
void ToH(int n,char x,char y,char z){
	if(n==1){
		printf("��һ�����Ӵ�");
		printf("%c",x);
		printf("�ƶ���");
		printf("%c.\n",z);
	}
	else{
		ToH(n-1,x,z,y);
		printf("��һ�����Ӵ�");
		printf("%c",x);
		printf("�ƶ���");
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
