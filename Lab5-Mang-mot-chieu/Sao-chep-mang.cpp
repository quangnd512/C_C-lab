#include<stdio.h>
#include<conio.h>
#include<math.h>

int a[100],n,b[100];
int main()
{
	printf("Nhap so luong phan tu can nhap: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Phan tu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nCac phan tu vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\nCac phan tu da duoc sao chep la: ");
	for(int i=0;i<n;i++){
		b[i]=a[i]; //Sao chep
		printf("%d\t",b[i]);
	}
}
