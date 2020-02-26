#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* i + j = n - 1 => cong cac phan tu vao
*/
int a[100][100],n;
int nhapMTa()
{
	printf("Nhap do dai cua ma tran vuong: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Phan tu a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
}

int xuatMTa()
{
	printf("Ma tran la:\n ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int tongDuongCheoPhuMT()
{
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i+j)==(n-1)){
				sum=sum+a[i][j];
			}
		}
	}
	printf("Tong duong cheo phu cua ma tran la: %d",sum);
}

int main()
{
	nhapMTa();
	xuatMTa();
	tongDuongCheoPhuMT();
	getch();
}
