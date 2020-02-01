#include<stdio.h>
#include<conio.h>
#include<math.h>

int mu(int m, int n){
	return pow(m, n);
}

main(){
	int a,b;
	printf("Nhap co so: ");
	scanf("%d",&a);
	printf("Nhap so mu: ");
	scanf("%d",&b);
	printf("Gia tri cua %d^%d la: %d",a,b,mu(a,b));
}
