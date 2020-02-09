#include<stdio.h>
#include<stdlib.h>
#define MAX 10

typedef float ElementType;

ElementType Mid(ElementType A[], int N);

int main(void){
	ElementType A[MAX];
	int i, N;
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%f",&A[i]);
	}
	printf(".2%f",Mid(A,N));
	return EXIT_SUCCESS;
}

ElementType Mid(ElementType A[], int N){
	int i, j, gap;
	ElementType temp;
	
	for(gap = N / 2; gap > 0; gap = gap / 2){
		for(i = gap; i < N; i++){
			for(j = i - gap;j >= 0 && A[j] > A[j+gap];j = j - gap){
				temp = A[j+gap];
				A[j+gap] = A[j];
				A[j] = temp;
			}
		}
	}
	return A[N / 2];
}