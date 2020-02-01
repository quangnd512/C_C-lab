#include<stdio.h>
#include<conio.h>
#include<math.h>

int doiGiaTri(int a, int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf("\nSau khi chuyen doi.!\n");
	printf("So thu nhat la: %d\n",a);
	printf("So thu hai la: %d\n",b);
	getch();
}
main(){
	int a,b;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	printf("\nSo thu nhat la: %d\n",a);
	printf("So thu hai la: %d\n",b);
	doiGiaTri(a,b);
}
