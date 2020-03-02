#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100], n, *poniter;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	poniter = &a[0];
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",poniter);
		poniter++;
	}
	printf("\nMang le: ");
	poniter = &a[0];
	for(int i=0;i<n;i++){
		if(*poniter%2!=0){
			printf("%3d",*poniter);
		}
		poniter++;
	}
	printf("\nMang chan: ");
	poniter = &a[0];
	for(int i=0;i<n;i++){
		if(*poniter%2==0){
			printf("%3d",*poniter);
		}
		poniter++;
	}
}
