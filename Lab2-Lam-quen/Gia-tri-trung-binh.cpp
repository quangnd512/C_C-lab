#include<stdio.h>
#include<conio.h>
#include<math.h>

int n,a[100],tong;
float giaTriTB;
int main()
{
	printf("Nhap so luong so can tinh (<100): ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++){
		tong = tong + a[j];
		giaTriTB = tong/(float)j;
	}
	printf("Tong so vua nhap la: %d\n",tong);
	printf("Gia tri trung binh la: %.2f",giaTriTB);
	getch();
}
