#include<stdio.h>
#include<conio.h>
#include<math.h>

int loiNhuan, chiPhi, doanhThu;
int main()
{
	printf("Nhap chi phi: ");
	scanf("%d",&chiPhi);
	printf("Nhap doanh thu: ");
	scanf("%d",&doanhThu);
	if(doanhThu>chiPhi){
		printf("Ban da thu duoc lai: %d",doanhThu-chiPhi);
	}else if(doanhThu == chiPhi){
		printf("Ban da dang hoa von.!");
	}else{
		printf("Ban dang bi thua lo: %d",chiPhi-doanhThu);
	}
}
