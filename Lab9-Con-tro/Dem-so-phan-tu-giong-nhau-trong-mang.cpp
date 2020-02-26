#include<stdio.h>
#include<conio.h>

int a[100], n, dem=0;
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
	
	
	for(int i=0;i<n;i++){
		phanTuMang1 = &a[i];
		for(int j=i+1;j<n;j++){
			phanTuMang2 = &a[j];
			if(*phanTuMang1==*phanTuMang2){
				dem++;
			}
		}
//		break;
	}
	
	printf("\nSo phan tu giong nhau la: %d",dem);
}
