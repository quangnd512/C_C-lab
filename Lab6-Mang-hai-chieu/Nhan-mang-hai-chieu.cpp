#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* Lay tung so o hang ngang cua ma tran A nhan voi tung so o hang doc cua ma tran B roi cong lai de ra mot hang
* Dieu kien la hang ngang cua ma tran A phai bang hang doc cua ma tran B hoac nguoc lai
* Thuat toan:
* a[i][j]: 1 2
*		   2 4
*		   2 4
* b[i][j]: 4 6 2
*		   3 7 5
* i		 : 0 1 2 (i lon)
* j		 : 0 1 2 (j lon)
* k		 : 0 1 2
* sum=0
* c[i][j]: 10 20 12
*		   20 40 24
*		   20 40 24
* Voi i=0 thi j=0, sum=0 va (k=0, k=1, k=2)
*							k=0 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[0][0]*b[0][0]= 0 + 1*4 = 4
							k=1 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[0][1]*b[1][0]= 4 + 2*3 = 4+6=10
							k=2 thi sum = sum + a[i][k]*b[k][j] = a[0][2] => Khong thoa man
							  => gan c[0][0] = 10 
* Voi i=0 thi j=1, sum=0 va (k=0, k=1, k=2)
*							k=0 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[0][0]*b[0][1]= 0 + 1*6 = 6
							k=1 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[0][1]*b[1][1]= 6 + 2*7 = 6+14=20
							k=2 thi sum = sum + a[i][k]*b[k][j] = a[0][2] => Khong thoa man
							  => gan c[0][1] = 20
* Voi i=0 thi j=2, sum=0 va (k=0, k=1, k=2)
*							k=0 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[0][0]*b[0][2]= 0 + 1*2 = 2
							k=1 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[0][1]*b[1][2]= 2 + 2*5 = 2+10=12
							k=2 thi sum = sum + a[i][k]*b[k][j] = a[0][2] => Khong thoa man
							  => gan c[0][2] = 12  
* Voi i=1 thi j=0, sum=0 va (k=0, k=1, k=2)
*							k=0 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[1][0]*b[0][0]= 0 + 2*4 = 4
							k=1 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[1][1]*b[1][0]= 4 + 4*3 = 4+12=20
							k=2 thi sum = sum + a[i][k]*b[k][j] = a[1][2] => Khong thoa man
							  => gan c[1][0] = 20 
* Voi i=1 thi j=1, sum=0 va (k=0, k=1, k=2)
*							k=0 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[1][0]*b[0][1]= 0 + 2*6 = 12
							k=1 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[1][1]*b[1][1]= 12 + 4*7 = 12+28=40
							k=2 thi sum = sum + a[i][k]*b[k][j] = a[1][2] => Khong thoa man
							  => gan c[1][1] = 40
* Voi i=1 thi j=2, sum=0 va (k=0, k=1, k=2)
*							k=0 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[1][0]*b[0][2]= 0 + 2*2 = 4
							k=1 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[1][1]*b[1][2]= 4 + 4*5 = 4+20=24
							k=2 thi sum = sum + a[i][k]*b[k][j] = a[1][2] => Khong thoa man
							  => gan c[1][2] = 24
* Voi i=2 thi j=0, sum=0 va (k=0, k=1, k=2)
*							k=0 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[2][0]*b[0][0]= 0 + 2*4 = 4
							k=1 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[2][1]*b[1][0]= 4 + 4*3 = 4+12=20
							k=2 thi sum = sum + a[i][k]*b[k][j] = a[2][2] => Khong thoa man
							  => gan c[2][0] = 20 
* Voi i=2 thi j=1, sum=0 va (k=0, k=1, k=2)
*							k=0 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[2][0]*b[0][1]= 0 + 2*6 = 12
							k=1 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[2][1]*b[1][1]= 12 + 4*7 = 12+28=40
							k=2 thi sum = sum + a[i][k]*b[k][j] = a[2][2] => Khong thoa man
							  => gan c[2][1] = 40
* Voi i=2 thi j=2, sum=0 va (k=0, k=1, k=2)
*							k=0 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[2][0]*b[0][2]= 0 + 2*2 = 4
							k=1 thi sum = sum + a[i][k]*b[k][j] tuc la: sum = sum + a[2][1]*b[1][2]= 4 + 4*5 = 4+20=24
							k=2 thi sum = sum + a[i][k]*b[k][j] = a[2][2] => Khong thoa man
							  => gan c[2][2] = 24
*/
int a[100][100],b[100][100],c[200][200],n,m,p,q;
int nhapMTa()
{
	printf("Nhap do dai cua ma tran A: ");
	scanf("%d",&n);
	printf("Nhap do rong cua ma tran A: ");
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
	printf("Ma tran A la:\n ");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int nhapMTb()
{
	printf("Nhap do dai cua ma tran B: ");
	scanf("%d",&p);
	printf("Nhap do rong cua ma tran B: ");
	scanf("%d",&q);
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			printf("Phan tu b[%d][%d]: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
}

int xuatMTb()
{
	printf("Ma tran B la:\n ");
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}

int nhanMT()
{
	if(n!=q||m!=p){
		printf("Hai ma tran khong nhan duoc.!");
	}else{
		for(int i=0;i<n;i++){
			for(int j=0;j<q;j++){
				int sum=0;
				for(int k=0;k<n;k++){
					sum= sum+a[i][k]*b[k][j];	
				}
				c[i][j]=sum;
			}
		}
		printf("Ma tran tich cua ma tran A va B la:\n ");
		for(int i=0;i<n;i++){
			for(int j=0;j<q;j++){
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}

int main()
{
	nhapMTa();
	xuatMTa();
	nhapMTb();
	xuatMTb();
	nhanMT();
	getch();
}
