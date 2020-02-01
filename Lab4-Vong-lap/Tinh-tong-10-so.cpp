#include<stdio.h>
#include<conio.h>
#include<math.h>

int tong = 0, a[10];

int main(){
	printf("Nhap 10 so can tinh: \n");
	for(int i=0;i<10;i++){
		printf("So thu [%d]: ",i+1);
		scanf("%d",&a[i]);
		tong=tong+a[i];
	}
	printf("Tong 10 so vua nhap la: %d",tong);
}
