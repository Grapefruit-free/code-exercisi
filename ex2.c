#include<stdio.h>
#include<stdlib.h>

int main(void){
	int x,y,z;
	for(x=1;x<=100;x++){
		for(y=1;y<=100;y++){
			for(z=1;z<=100;z++){
				if((x+y+z==100)&&(3*x+2*y+0.5*z==100))
					printf("x=%3d, y=%3d, z=%3d \n",x,y,z);
			}
		}
	}		
	return EXIT_SUCCESS;
}
