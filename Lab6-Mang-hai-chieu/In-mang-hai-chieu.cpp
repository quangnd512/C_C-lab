#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* Ma tran voi i la chieu rong cua ma tran
* 		  voi j la chieu dai cua ma tran
*/
int a[100][100],n,m;
int nhap()
{
	printf("Nhap do dai cua ma tran: ");
	scanf("%d",&n);
	printf("Nhap do rong cua ma tran: ");
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Phan tu a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
}

int xuat()
{
	printf("Ma tran vua nhap la:\n ");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	nhap();
	xuat();
	getch();
}
