#include<stdio.h>
#include<stdlib.h>
int main(void){
	char banc[10] = "ABCD";
	char *pb;
	
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
