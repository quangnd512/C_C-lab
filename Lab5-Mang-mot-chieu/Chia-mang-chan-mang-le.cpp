#include<stdio.h>
#include<conio.h>
#include<math.h>



int main()
{
	int a[100],n,b[50],c[50];
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
	
	//chan le
	printf("\nMang chan la: ");
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			b[i]=a[i];
			printf("%d\t",b[i]);
		}
	}
	printf("\nMang le la: ");
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			c[i]=a[i];
			printf("%d\t",c[i]);
		}
	}
}
