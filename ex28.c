#include<stdio.h>
#include<stdlib.h>


struct student {
	char ID[10];
	int month;
	int jour;
};

int main(void){
	struct student str[100];
	int i,x,y,j,n,k;
	int flag,count[100]={0};
	
	printf("请输入班级人数：");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("ID:");
		scanf("%s",str[i].ID);
		printf("day:");
	    scanf("%d",str[i].jour);
		printf("month:");
		scanf("%d",str[i].month);
	}
	
	for(x=1;x<=12;x++){
		for(y=1;y<=31;y++){
			
			flag = 0;
			j = 0;
			
			for(i=0;i<n;i++){
				if((str[i].month == x) && (str[i].jour == y)){
					count[++j]=i;
					flag++;
				}
			}
			if(flag > 1){
				printf("%d %d",x,y);
				for(k=1;k<=j;k++){
					printf("%s",str[count[k]].ID);
				}
			}
			printf("\n");		
		}
	}			
		
	return EXIT_SUCCESS;
}
