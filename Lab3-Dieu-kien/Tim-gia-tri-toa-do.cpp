#include<stdio.h>
#include<conio.h>
#include<math.h>

int x,y,c;
int main()
{
	printf("Nhap gia tri x: ");
	scanf("%d",&x);
	printf("Nhap gia tri y: ");
	scanf("%d",&y);
	if(x>0){
		if(y>0){
			printf("Diem co toa do (%d, %d) thuoc goc phan tu thu nhat.!",x,y);
		}else if(y==0){
			printf("Diem co toa do (%d, %d) nam o truc hoanh co do dai x = %d",x,y,x);
		}else{
			printf("Diem co toa do (%d, %d) thuoc goc phan tu thu tu.!",x,y);
		}
	}else if(x==0){
		if(y>0){
			printf("Diem co toa do (%d, %d) nam o truc tung co do dai y = %d",x,y,y);
		}else if(y==0){
			printf("Diem co toa do (%d, %d) nam o tam toa do",x,y);
		}else{
			printf("Diem co toa do (%d, %d) nam o truc tung co do dai y = %d",x,y,y);
		}
	}else{
		if(y>0){
			printf("Diem co toa do (%d, %d) thuoc goc phan tu thu hai.!",x,y);
		}else if(y==0){
			printf("Diem co toa do (%d, %d) nam o truc hoanh co do dai x = %d",x,y,x);
		}else{
			printf("Diem co toa do (%d, %d) thuoc goc phan tu thu ba.!",x,y);
		}
	}
	getch();
}
