#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* Cap cua ma tran phai bang nhau
*/
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

int congMT()
{
	if(n!=p||m!=q){
		printf("Hai ma tran khong cung cap nen khong cong duoc.!");
	}else{
		for(int i=0;i<p;i++){
			for(int j=0;j<q;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("Ma tran tong cua ma tran A va B la:\n ");
		for(int i=0;i<p;i++){
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
	congMT();
	getch();
}
