#include<stdio.h>
#include<conio.h>
#include<math.h>

int a,b,c;
int main()
{
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	printf("Nhap so thu ba: ");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("So thu nhat = %d la so lon nhat",a);
		}else if(a==c){
			printf("So thu nhat va so thu ba = %d la so lon nhat",c);
		}else{
			printf("So thu ba = %d la so lon nhat",c);
		}
	}else if(a==b){
		if(a>c){
			printf("So thu nhat va so thu hai = %d la so lon nhat",a);
		}else if(a==c){
			printf("Ba so bang nhau va = %d",c);
		}else{
			printf("So thu ba = %d la so lon nhat",c);
		}
	}else{
		if(b>c){
			printf("So thu hai = %d la so lon nhat",b);
		}else if(b==c){
			printf("So thu hai va so thu ba = %d la so lon nhat",c);
		}else{
			printf("So thu ba = %d la so lon nhat",c);
		}
	}
	getch();
}
