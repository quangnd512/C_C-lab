#include<stdio.h>
#include<conio.h>
#include<math.h>

float toan,ly,hoa,tong,toanLy;
int main()
{
	printf("Tieu chi xe tuyen: \n");
	printf("Diem Toan >= 6.5 \n");
	printf("Diem Ly >= 5.5 \n");
	printf("Diem Hoa >= 5.0 \n");
	printf("Tong diem ba mon >= 18.0 \n");
	printf("hoac \n");
	printf("Tong diem Toan va Vat ly >= 14.0 \n");
	printf("------------------------------------------\n");
	printf("\n");
	printf("Nhap diem Toan: ");
	scanf("%f",&toan);
	printf("Nhap diem Ly: ");
	scanf("%f",&ly);
	printf("Nhap diem Hoa: ");
	scanf("%f",&hoa);
	tong = toan+ly+hoa;
	toanLy = toan+ly;
	printf("Tong diem ba mon la: %.2f\n",tong);
	printf("Tong diem mon Toan va Vat ly la: %.2f\n",toanLy);
	if(tong>=18||toanLy>=14){
		if(toan>=6.5&&ly>=5.5&&hoa>=5){
			printf("Chuc mung.! Ban da trung tuyen.!");	
		}else{
			printf("Rat tiec.! Ban khong trung tuyen.!");
		}
	}else{
		printf("Rat tiec.! Ban khong trung tuyen.!");
	}
	getch();
}
