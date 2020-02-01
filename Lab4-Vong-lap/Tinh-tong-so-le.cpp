#include<stdio.h>
#include<conio.h>
#include<math.h>
	
	
int n,a,count=0,tong=0;
int main()
{
	printf("Nhap so cac so: ");
	scanf("%d",&a);
	printf("Cac so le la: ");
	do{
		n++;
		if(n%2!=0){
			printf("%d\t",n);
			tong=tong+n;
			count++;
		}
	}while(count<a);
	printf("\nTong day so la: %d",tong);
}
