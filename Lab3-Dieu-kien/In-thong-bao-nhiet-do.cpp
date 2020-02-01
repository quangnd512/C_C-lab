#include<stdio.h>
#include<conio.h>
#include<math.h>
int a;
int main()
{
	printf("Nhap nhiet do: ");
	scanf("%d",&a);
	if(a<0){
		printf("Thoi tiet gia ret.!");
	}else if(a<=10){
		printf("Thoi tiet rat lanh.!");
	}else if(a<=20){
		printf("Thoi tiet lanh.!");
	}else if(a<=30){
		printf("Thoi tiet binh thuong.!");
	}else if(a<=40){
		printf("Thoi tiet nong.!");
	}else{
		printf("Thoi tiet rat nong.!");
	}
}
