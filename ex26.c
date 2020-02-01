#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct student
{
	int id_nom;
	char name[10];
};

int main(void){
	int i;
	
	struct student mike = {123,{'m','i','k','e','\0'}};
	mike.id_nom = 2020000 + mike.id_nom;
	
	for(i=0;mike.name[i] != '\0';i++){
		mike.name[i] = toupper(mike.name[i]);
	}
	printf("%d\n",mike.id_nom);
	printf("%s",mike.name);
	return EXIT_SUCCESS;
}
