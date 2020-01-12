#include<stdio.h>
#include<stdlib.h>
void recur(){
	char c;
    scanf("%c",&c);
	if(c != '\n')
		recur();
	printf("%c",c);
}
int main(void){
	recur();
	return EXIT_SUCCESS;
}
