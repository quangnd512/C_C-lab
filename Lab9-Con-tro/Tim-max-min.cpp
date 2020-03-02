#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100], n, *poniter;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	poniter = &a[0];
	for(int i=0; i<n; i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",poniter);
		poniter++;
	}
	printf("\nCac phan tu cua mang la: ");
	poniter = &a[0];
	for(int i=0;i<n;i++){
		printf("%3d",*poniter);
		poniter++;
	}
	
	int max=a[0], min=a[0];
	for(int i=0;i<n;i++){
		poniter = &a[i];
		if(*poniter>max){
			max = *poniter;
		}else{
			min = *poniter;
		}
	}
	printf("\nPhan tu max cua mang la: %d",max);
	printf("\nPhan tu min cua mang la: %d",min);
}
