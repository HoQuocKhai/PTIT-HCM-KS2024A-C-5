#include<stdio.h>

int main (){
	int division,multi,minus,sum,choice,num1,num2;
	printf("nhap so thu 1: ");
	scanf("%d",&num1);
	printf("nhap so thu 2: ");
	scanf("%d",&num2);
	do {
		printf("\n CALCULATOR \n");
		printf("1. tong 2 so \n");
		printf("2. hieu 2 so \n");
		printf("3. tich 2 so \n");
		printf("4. thuong 2 so \n");
		printf("5. thoat \n");
		printf("lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				sum=num1+num2;
				printf("tong 2 so : %d",sum);
				break;
			case 2:
				minus=num1-num2;
				printf("hieu 2 so : %d",minus);
				break;
			case 3:
				multi=num1*num2;
				printf("tich 2 so : %d",multi);
				break;
			case 4:
				division=num1/num2;
				printf("thuong 2 so : %d",division);
				break;
			case 5:
				printf("thoat may tinh");
				return 0;
			default :
				printf("khong co lua chon cua ban");
		}
	}while (true);
	return 0;
}
