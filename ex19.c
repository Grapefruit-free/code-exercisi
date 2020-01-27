#include<stdio.h>
#include<stdlib.h>

int main(void){
	int b = 5;
	int *pb = &b;
	
	char c[6]={'h','e','l','l','o','\0'};
	char *pc = c;
	
	printf("%p\n",pb);
	printf("%s\n",pc);
	printf("%p\n",pc);
	return EXIT_SUCCESS;
}
