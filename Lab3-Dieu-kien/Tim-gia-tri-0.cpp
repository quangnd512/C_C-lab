#include<stdio.h>
#include<conio.h>
#include<math.h>

int so;
int main()
{
	printf("Nhap so can kiem tra: ");
	scanf("%d",&so);
	printf("Gia tri cua m la: %d\n",so);
	if(so>0){
		printf("Gia tri tuong ung cua n = 1");
	}else if(so<0){
		printf("Gia tri tuong ung cua n = -1");
	}else{
		printf("Gia tri tuong ung cua n = 0");
	}
	getch();
}
