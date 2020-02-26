#include<stdio.h>
#include<conio.h>

int a[100], n;
int *phanTuMang1, *phanTuMang2;
int main()
{
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	phanTuMang1 = &a[0];
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",phanTuMang1);
		phanTuMang1++;
	}
	phanTuMang1 = &a[0];
	printf("\nMang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%3d",*phanTuMang1);
		phanTuMang1++;
	}
	phanTuMang1 = &a[0];
	phanTuMang2 = phanTuMang1;
	printf("\nMang sao chep la: ");
	for(int i=0;i<n;i++){
		printf("%3d",*phanTuMang2);
		phanTuMang2++;
	}
}
