#include<stdio.h>
#include<stdlib.h>
int main(void){
	char banc[10] = "ABCD";
	char *pb;
	int a[4]={1,2,3,4};
	
	printf("%p\n",a);
	printf("%p\n",&a);
	printf("%p\n",a+1);
	printf("%p\n",&a+1);
	
	
	pb = "hello";
	printf("%p\n",pb);
	printf("%s\n",pb);
	pb++;
	printf("%s\n",pb);
	printf("%p\n",pb);
	pb = banc;
	printf("%s",pb);
	return EXIT_SUCCESS;
}
