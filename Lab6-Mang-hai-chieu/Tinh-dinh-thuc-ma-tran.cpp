#include<stdio.h>
#include<conio.h>

int a[100][100],n;
int nhap()
{
	printf("Nhap cac phan tu cua ma tran vuong (3x3): \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Phan tu a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
}

int xuat()
{
	printf("Ma tran vua nhap la:\n ");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

/** Phan tich bai toan
* det = 1*(2*4 - 3*1) + 0*(1*4 - 3*2) + 1*(1*1 - 2*2)
* a[i][j]: 1 0 1
*		   1 2 3
*		   2 1 4
* i		 : 0 1 2
* j		 : 0 1 2
* det = det + (a[0][0] * (a[1][1] * a[2][2] - a[1][2] * [2][1])) + (a[0][1] * (a[1][2] * a[2][0] - a[1][0] * a[2][2]))
*/
int dinhThuc()
{
	int det=0;
	for (int j = 0; j < 3; j++){
        det = det + (a[0][j] * (a[1][(j+1)%3] * a[2][(j+2)%3] - a[1][(j+2)%3] * a[2][(j+1)%3]));
	}
	printf("Dinh thuc cua ma tran la: %d",det);
}

int main()
{
	nhap();
	xuat();
	dinhThuc();
	getch();
}
