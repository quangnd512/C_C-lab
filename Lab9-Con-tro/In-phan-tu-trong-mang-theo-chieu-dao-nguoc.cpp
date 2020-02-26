#include<stdio.h>
#include<conio.h>

int a[100], n;
int *phanTuMang;
int main()
{
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	phanTuMang = &a[0];
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",phanTuMang);
		phanTuMang++;
	}
	printf("\nMang theo chieu dao nguoc la: ");
	phanTuMang = &a[n-1];
	for(int i=0;i<n;i++){
		printf("%3d",*phanTuMang);
		phanTuMang--;
	}
}
