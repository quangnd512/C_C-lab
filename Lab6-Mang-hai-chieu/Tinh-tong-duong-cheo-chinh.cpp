#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* i = j => cong cac phan tu vao
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

int tongDuongCheoChinhMT()
{
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum=sum+a[i][j];
			}
		}
	}
	printf("Tong duong cheo chinh cua ma tran la: %d",sum);
}

int main()
{
	nhapMTa();
	xuatMTa();
	tongDuongCheoChinhMT();
	getch();
}
