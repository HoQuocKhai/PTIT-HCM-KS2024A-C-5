#include<stdio.h>

int main (){
	int a,N;
	for (int x=1 ; x<10 ; x++){
		for (int i=1 ; i<=10 ; i++){
			a=i*x;
			printf(" %d x %d = %d\n",x,i,a);
		}
		printf("============\n");
	}
	return 0;
}
