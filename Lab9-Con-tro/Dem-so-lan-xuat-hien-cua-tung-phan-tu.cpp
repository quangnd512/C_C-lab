#include<stdio.h>
#include<conio.h>

int main()
{
	int atr[100],n, *poniter;
	printf("Nhap so phan tu cua day: ");
	scanf("%d",&n);
	poniter = &atr[0];
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",poniter);
		poniter++;
	}
	
	poniter = &atr[0];
	printf("Day so vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%3d",*poniter);
		poniter++;
	}
	
	//Dem so lan xuat hien
	int dem, b[100], *poniter2;
	for(int i=0;i<n;i++){
		dem =1;
		poniter = &atr[i];
		for(int j=i+1;j<n;j++){
			poniter2 = &atr[j];
			if(*poniter==*poniter2){
				dem++;
				b[j] = 0;
			}
		}
		if(b[i]!=0){
			b[i]=dem;
		}
	}
	for(int i=0;i<n;i++){
		poniter2 = &b[i];
		poniter = &atr[i];
		if(*poniter2!=0){
			printf("\nPhan tu %d xuat hien %d lan.!",*poniter,*poniter2);
		}
	}
}
