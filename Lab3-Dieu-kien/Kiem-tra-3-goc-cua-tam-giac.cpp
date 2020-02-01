#include<stdio.h>
#include<conio.h>
#include<math.h>
int a,b,c,tong;
int main()
{
	printf("Nhap goc a cua tam giac: ");
	scanf("%d",&a);
	printf("Nhap goc b cua tam giac: ");
	scanf("%d",&b);
	printf("Nhap goc c cua tam giac: ");
	scanf("%d",&c);
	tong = a+b+c;
	if(tong == 180){
		printf("\nDay la ba goc cua mot tam giac");
	}else{
		printf("\nDay khong phai la ba goc cua mot tam giac");
	}
}
