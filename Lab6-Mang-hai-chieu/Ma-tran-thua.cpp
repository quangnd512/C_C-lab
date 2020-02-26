#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* Neu a[i][j]=0 thi tang bien dem len 1
* Ra ngoai vong lap neu bien dem lon hon (n*m)/2 thi ma tran do la ma tran thua
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
	int dem=0;
	printf("Ma tran la:\n ");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",a[i][j]);
			if(a[i][j]==0){
				dem++;
			}
		}
		printf("\n");
	}
	if(dem>((n*m)/2)){
		printf("Day la ma tran thua.!");
	}
}

int main()
{
	nhapMTa();
	xuatMTa();
	getch();
}
