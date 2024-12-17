#include<stdio.h>

int main (){
	int a,N;
	printf("nhap so nguyen duong tu 1 den 10 : ");
	scanf("%d",&N);
	for (int i=1 ; i<=10 ; i++){
		a=i*N;
		printf(" %d x %d = %d\n",N,i,a);
	}
	return 0;
}
