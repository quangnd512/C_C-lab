#include<stdio.h>
#include<conio.h>
#include<math.h>
int a,b;
int main()
{
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	if(a==b){
		printf("Hai so bang nhau va bang %d",a);
	}else if(a>b){
		printf("So %d lon hon so %d",a,b);
	}else{
		printf("So %d lon hon so %d",b,a);
	}
}
