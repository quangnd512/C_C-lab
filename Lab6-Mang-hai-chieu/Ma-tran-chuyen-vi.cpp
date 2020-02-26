#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* a[i][j]: 1 2 5
*		   3 4 2 
*		   1 2 3
* i		 : 0 1 2
* j		 : 0 1 2
* temp
* Voi i=1 => j chay tu 0 den 0: temp=a[1][0]=3, a[1][0]=a[0][1]=2, a[0][1]=temp=3.
* Voi i=2 => j chay tu 0 den 1: Voi j=0 thi temp=a[2][0]=1, a[2][0]=a[0][2]=5, a[0][2]=temp=1.
*			 					Voi j=1 thi temp=a[2][1]=2, a[2][1]=a[1][2]=2, a[1][2]=temp=2.
*
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

int chuyenViMT()
{
	int temp;
	printf("Ma tran chuyen vi la: \n");
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	nhapMTa();
	xuatMTa();
	chuyenViMT();
	getch();
}
