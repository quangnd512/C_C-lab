#include<stdio.h>
#include<conio.h>

int a[100], n,tong=0,tongChan=0,TongLe=0;
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
	phanTuMang = &a[0];
	printf("\nMang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%3d",*phanTuMang);
		tong = tong + *phanTuMang;
		phanTuMang++;
	}
	phanTuMang = &a[0];
	for(int i=0;i<n;i++){
		if(*phanTuMang%2==0){
			tongChan = tongChan + *phanTuMang;
		}else{
			TongLe = TongLe + *phanTuMang;
		}
		phanTuMang++;
	}
	printf("\nTong cua cac phan tu mang la: %d",tong);
	printf("\nTong chan cua cac phan tu mang la: %d",tongChan);
	printf("\nTong le cua cac phan tu mang la: %d",TongLe);
}
