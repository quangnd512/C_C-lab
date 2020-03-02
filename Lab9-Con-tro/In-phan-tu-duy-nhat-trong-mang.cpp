#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100],n,*poniter, *poniter2, *poniter3;
	printf("Nhap so luong phan tu can nhap: ");
	scanf("%d",&n);
	poniter = &a[0];
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",poniter);
		poniter++;
	}
	
	//Hien thi
	printf("\nCac phan tu cua day la: ");
	poniter = &a[0];
	for(int i=0;i<n;i++){
		printf("%3d ", *poniter);
		poniter++;
	}
	
	//In phan tu duy nhat
	printf("\nPhan tu duy nhat la: ");
	for(int i=0;i<n;i++){
		int dem1=0, dem2=0;
		poniter = &a[i];
		for(int j=0;j<i;j++){
			poniter2 = &a[j];
			if(*poniter==*poniter2){
				dem1++;
			}
			poniter2++;
		}
		for(int k=i+1;k<n;k++){
			poniter3 = &a[k];
			if(*poniter3==*poniter){
				dem2++;
			}
			poniter3++;
		}
		if(dem1==0&&dem2==0){
			printf("%d\t",*poniter);
		}
		poniter++;
	}
}
