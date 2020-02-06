#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Phan tich bai toan
* Cung tuong tu nhu cach giai bai toan tim so lon thu hai
*/
int main()
{
	int a[100],n;
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
	
	//Phan tu nho thu hai
	int min=a[0], secondMin=a[0];
	for(int i=1;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	for(int i=1;i<n;i++){
		if(a[i]<secondMin&&a[i]>min){
			secondMin=a[i];
		}
	}
	printf("\nPhan tu nho thu hai la: %d",secondMin);
	
}
