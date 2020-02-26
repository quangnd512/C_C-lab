#include<stdio.h>
#include<conio.h>
/** Phan tich bai toan
* Voi ma tran tam giac tren thi i<j
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
	printf("Ma tran tam giac tren la:\n ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>=j){
				printf("%d\t",a[i][j]);
			}else{
				printf("%d\t",0);
			}
		}
		printf("\n");
	}
}

int main()
{
	nhapMTa();
	xuatMTa();
	getch();
}
