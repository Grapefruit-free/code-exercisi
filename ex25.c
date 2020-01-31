#include<stdio.h>
#include<stdlib.h>

int *get1(){
	int a = 0;
	int *pt;
	a++;
	pt = &a;
	return (pt);
}

int *get2(){
	static int b = 0;
	int *pc;
	b++;
	pc = &b;
	return (pc);
}

int main(void){
	int *p,*q;
	int i;
	
	for(i=0;i<5;i++){
		
		p = get1();
	    q = get2();
	}
	
	
	printf("%d  %d  %d ",(*p),(*q),i);
	return EXIT_SUCCESS;
}
