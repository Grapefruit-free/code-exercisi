#include<stdio.h>
#include<stdlib.h>

int pomme(int m,int n){
	if(m<=1||n<=1)
		return 1;
	if(m<n)
		return pomme(m,m);
	else
		return (pomme(m,n-1)+pomme(m-n,n));
}

int plat(){
	int n;
	scanf("%d",&n);
	return n;
}

int nomber(){
	int n;
	scanf("%d",&n);
	return n;
}

int main(void){
	printf("%d",pomme(nomber(),plat()));
	return EXIT_SUCCESS;
}
	
		