#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct student{
	int id_nom;
	char name[10];
};

struct student rewone(){
	struct student one = {2020123,{'M','I','K','E','\0'}};
	return one;
}

int main(void){
	struct student mike;
	mike = rewone();
	printf("%s\n%d",mike.name,mike.id_nom);
	return EXIT_SUCCESS;
}
