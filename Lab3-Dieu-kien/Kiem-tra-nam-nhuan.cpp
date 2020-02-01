#include<stdio.h>
#include<conio.h>
#include<math.h>
int nam;
int main()
{
	printf("Nhap nam can kiem tra: ");
	scanf("%d",&nam);
	if(nam%400==0||nam%4==0&&nam%100!=0){
		printf("%d la nam nhuan.!",nam);
	}else{
		printf("%d la nam khong nhuan.!",nam);
	}
	getch();
}
