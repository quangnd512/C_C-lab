#include<stdio.h>
#include<conio.h>
#include<string.h>

#define SIZE 50

/*
* Su sung struct ben trong union
*/

struct SV
{
	char tenSV[SIZE];
	char gioiTinh[SIZE];
	char maSV[SIZE];
	float diemThi;
};

//Khai bao ham union va union set
union details 
{
	struct SV sinhVien[SIZE];
};
union details set;

int main()
{
	int n;
	printf("Nhap so sinh vien can nhap: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Sinh vien %d\n",i);
		printf("Ho va ten: ");
		scanf("%s",&set.sinhVien[i].tenSV);
		printf("Gioi tinh: ");
		scanf("%s",&set.sinhVien[i].gioiTinh);
		printf("Ma sinh vien: ");
		scanf("%s",&set.sinhVien[i].maSV);
		fflush(stdin);
		printf("Diem thi: ");
		scanf("%f",&set.sinhVien[i].diemThi);
		printf("\n");
	}
	
	//Hien thi
	printf("\nThong tin sinh vien vua nhap:\n");
	for(int i=1;i<=n;i++){
		printf("Sinh vien thu %d\n",i);
		printf("Ho va ten: %s\n",set.sinhVien[i].tenSV);
		printf("Gioi tinh: %s\n",set.sinhVien[i].gioiTinh);
		printf("Ma sinh vien: %s\n",set.sinhVien[i].maSV);
		printf("Diem thi: %f\n\n",set.sinhVien[i].diemThi);
	}
	getch();
}

