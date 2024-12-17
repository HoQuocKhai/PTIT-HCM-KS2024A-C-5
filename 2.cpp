#include<stdio.h>

int main (){
	int a=100,b;
	do {
		printf("nhap so : ");
		scanf("%d",&b);
		if (a==b){
			return 0;
		}
	}while (true);
	return 0;
}
