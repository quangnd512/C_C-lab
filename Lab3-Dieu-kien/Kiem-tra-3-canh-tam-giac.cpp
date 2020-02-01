#include<stdio.h>
#include<conio.h>
#include<math.h>
int a,b,c;
int main()
{
	printf("Nhap canh a cua tam giac: ");
	scanf("%d",&a);
	printf("Nhap canh b cua tam giac: ");
	scanf("%d",&b);
	printf("Nhap canh c cua tam giac: ");
	scanf("%d",&c);
	if(a==b&&a!=c||a==c&&a!=b||b==c&&b!=a){
		printf("\nDay la tam giac can");
	}else if(a==b&&a==c&&b==c){
		printf("\nDay la tam giac deu");
	}else{
		printf("\nDay la tam giac thuong");
	}
}
