#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* a[i][j] : 1 2
*		    5 3
* [i][j]  : 00 01 0m (n=2)
*		    10 11 1m (m=2)
*           n0 n1
* Tong cot: a[i][j] = a[i++][j]. Ta goi tong cot la a[n][j]=0 la tong cua moi cot
*			Voi j=0 thi i=0 va i=1.
						Neu i=0: thi a[0][0]=1. Tong a[n][j]= a[n][j]+a[i][j]= a[2][0]+a[0][0]=0+1=1
						Neu i=1: thi a[1][0]=5. Tong a[n][j]= a[n][j]+a[i][j]= a[2][0]+a[1][0]=1+5=6
						=> a[n][0]=6
*			Voi j=1 thi i=0 va i=1.
						Neu i=0: thi a[0][1]=2. Tong a[n][j]= a[n][j]+a[i][j]= a[2][0]+a[0][1]=0+2=2
						Neu i=1: thi a[1][1]=3. Tong a[n][j]= a[n][j]+a[i][j]= a[2][0]+a[1][1]=2+3=5
						=> a[n][1]=5						
* Tong hang: a[i][j] = a[i][j++]. Ta goi tong cot la a[i][m]=0 la tong cua moi hang
*			Voi i=0 thi j=0, j=1.
						Neu j=0: thi a[0][0]=1. Tong a[i][m]= a[i][m]+a[i][j]= a[0][2]+a[0][0]=0+1=1
						Neu j=1: thi a[0][1]=2. Tong a[i][m]= a[i][m]+a[i][j]= a[0][2]+a[0][1]=1+2=3
						=> a[0][m]=3
*			Voi i=1 thi j=0, j=1.
						Neu j=0: thi a[1][0]=5. Tong a[i][m]= a[i][m]+a[i][j]= a[0][2]+a[1][0]=0+5=5
						Neu j=1: thi a[1][1]=3. Tong a[i][m]= a[i][m]+a[i][j]= a[0][2]+a[1][1]=5+3=8
						=> a[0][m]=3
*
*/
int a[100][100],n,m;
int nhapMTa()
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

int xuatMTa()
{
	printf("Ma tran la:\n ");
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int tonghang()
{
	for(int i=0;i<n;i++){
		a[i][m]=0;
		for(int j=0;j<m;j++){
			a[i][m]= a[i][m]+a[i][j];
		}
	}
}

int tongcot()
{
	for(int j=0;j<m;j++){
		a[n][j]=0;
		for(int i=0;i<n;i++){
			a[n][j]= a[n][j]+a[i][j];
		}
	}
}

int main()
{
	nhapMTa();
	tonghang();
	tongcot();
	xuatMTa();
	getch();
}
