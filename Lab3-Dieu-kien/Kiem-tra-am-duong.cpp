#include<stdio.h>
#include<conio.h>
#include<math.h>
int a;
int main()
{
	printf("Nhap so: ");
	scanf("%d",&a);
	if(a==0){
		printf("Day la so 0");
	}else{
		if(a>0){
			printf("%d la so duong",a);
		}else{
			printf("%d la so am",a);	
		}
	}
}
