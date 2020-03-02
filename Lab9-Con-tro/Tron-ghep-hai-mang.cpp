#include<stdio.h>
#include<conio.h>
#define SIZE 100 

int main()
{
	int a[SIZE], b[SIZE], c[SIZE], m, n, h=0, temp=0, *poniter, *poniter2;
	//Mang 1
	printf("Nhap mang 1: \n");
	printf("Nhap so phan tu cua mang 1: ");
	scanf("%d",&n);
	poniter = &a[0];
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",poniter);
		poniter++;
	}
	
	//In phan tu
	poniter = &a[0];
	printf("\nDay phan tu thu nhat la: ");
	for(int i=0;i<n;i++){
		c[h]=a[i];
		printf("%3d",*poniter);
		poniter++;
		h++;
	}
	
	//Mang 2
	printf("\n\nNhap mang 2: \n");
	printf("Nhap so phan tu cua mang 2: ");
	scanf("%d",&m);
	poniter = &b[0];
	for(int j=0;j<m;j++){
		printf("Phan tu thu %d: ",j+1);
		scanf("%d",poniter);
		poniter++;
	}
	
	//In phan tu
	poniter = &b[0];
	printf("\nDay phan tu thu nhat la: ");
	for(int j=0;j<m;j++){
		c[h]=b[j];
		printf("%3d",*poniter);
		poniter++;
		h++;
	}

	for(int i=0;i<n+m;i++){
		poniter = &c[i];
		for(int j=i+1;j<m+n;j++){
			poniter2 = &c[j];
			if(*poniter>*poniter2){
				temp = *poniter;
				*poniter = *poniter2;
				*poniter2 = temp;
			}
		}
	}
	
	poniter2 = &c[0];
	printf("\nMang tron la: ");
	for(int i=0;i<n+m;i++){
		printf("%3d",*poniter2);
		poniter2++;
	}
}
