#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* Cap cua ma tran phai bang nhau sau do so sanh tung phan tu cua ma tran mot
*/
int a[100][100],b[100][100],n,m,p,q;
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

int soSanhMT()
{
	int flag=1;
	if(n!=p||m!=q){
		printf("Hai ma tran khong cung cap nen khong the so sanh.!\n");
	}else{
		for(int i=0;i<p;i++){
			for(int j=0;j<q;j++){
				if(a[i][j]!=b[i][j]){
					flag=0;
					break;
				}
			}
		}
		if(flag==0){
			printf("Hai ma tran khong bang nhau.!");
		}else{
			printf("Hai ma tran bang nhau.!");
		}
	}
}

int main()
{
	nhapMTa();
	xuatMTa();
	nhapMTb();
	xuatMTb();
	soSanhMT();
	getch();
}
