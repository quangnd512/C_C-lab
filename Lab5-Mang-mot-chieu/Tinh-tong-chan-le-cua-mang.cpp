#include<stdio.h>
#include<conio.h>
#include<math.h>


int a[100],n,tongChan=0,tongLe=0;
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
		if(a[i]%2==0){
			tongChan=tongChan+a[i];
		}else{
			tongLe=tongLe+a[i];
		}
	}
	printf("\nTong cac so chan cua mang la: %d\n",tongChan);
	printf("Tong cac so le cua mang la: %d",tongLe);
}
