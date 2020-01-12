#include<stdio.h>
#include<stdlib.h>



int importer(){//输入天数
	int n;
	scanf("%d",&n);
	return n;
}

void Week(int n){//判断是星期几
	int p;
	p = n%7;
	switch(p){
		case 0:printf("Samedi");break;
		case 1:printf("Dimanche");break;
		case 2:printf("Lundi");break;
		case 3:printf("Merdi");break;
		case 4:printf("Mercredi");break;
		case 5:printf("Jeudi");break;
		case 6:printf("Vendredi");break;
		default:fprintf(stderr,"error");
	}
}
		
int main(void){
	Week(importer());
	return EXIT_SUCCESS;
}