#include<stdio.h>
#include<conio.h>
#include<math.h>

int tong(int a, int b){
	int tong = 0;
	tong = a+b;
	printf("Tong hai so la: %d",tong);
	getch();
}
main(){
	int a,b;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	tong(a,b);
}
