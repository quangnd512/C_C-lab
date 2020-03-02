#include<stdio.h>
#include<conio.h>

int main()
{
	int temp, n, a[100], *poniter, *poniter1;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	poniter = &a[0];
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",poniter);
		poniter++;
	}
	for(int i=0;i<n;i++){
		poniter = &a[i];
		for(int j=i+1;j<n;j++){
			poniter1 = &a[j];
			if(*poniter>*poniter1){
				temp = *poniter;
				*poniter = *poniter1;
				*poniter1 = temp;
			}
		}
	}
	
	printf("Mang sau khi sap xep: ");
	poniter = &a[0];
	for(int i=0;i<n;i++){
		printf("%3d",*poniter);
		poniter++;
	}
}
