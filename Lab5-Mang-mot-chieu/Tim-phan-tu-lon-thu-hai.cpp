#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Phan tich bai toan
* Phan tu lon thu hai la phan tu lon hon tat ca cac so khac va chi be hon so lon nhat
* Nhu vay de tim duoc so lon thu 2 ta can tim so lon nhat truoc
* Roi xet dieu kien a[i]<max va a[i]>secondMax
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
	
	//Phan tu lon thu hai
	int max=0, secondMax=0;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>secondMax&&a[i]<max){
			secondMax=a[i];
		}
	}
	printf("\nPhan tu lon thu hai la: %d",secondMax);
	
}
