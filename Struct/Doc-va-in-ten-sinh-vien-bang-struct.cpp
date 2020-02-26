#include<stdio.h>
#include<conio.h>
#include<string.h>

#define SIZE 50 //gia tri cua hang so SIZE = 50

/*
* Su dung struct ben trong ham main
*/

struct SV
{
	char tenSinhVien[SIZE];
	char maSinhVien[SIZE];
	char tenMonHoc1[SIZE];
	char tenMonHoc2[SIZE];
	char tenMonHoc3[SIZE];
};

void inSinhVien(struct SV *studen);

int n;
int main()
{
	struct SV studen[SIZE]; //Goi bien cau truc struct trong ham main
	printf("Nhap so luong sinh vien can nhap: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		printf("Nhap sinh vien thu %d: \n",i);
		printf("Ho va ten:");
		scanf("%s",studen[i].tenSinhVien);
		printf("Ma sinh vien:");
		scanf("%s",studen[i].maSinhVien);
		printf("Ten mon hoc thu nhat:");
		scanf("%s",studen[i].tenMonHoc1);
		printf("Ten mon hoc thu hai:");
		scanf("%s",studen[i].tenMonHoc2);
		printf("Ten mon hoc thu ba:");
		scanf("%s",studen[i].tenMonHoc3);
		printf("\n");
	}
	
	//In thong tin
	printf("\nThong tin cac sinh vien la: \n");
	for(int i=1;i<=n;i++){
		printf("Sinh vien thu %d\n",i);
		inSinhVien(&studen[i]);
	}
	
}

void inSinhVien(struct SV *studen)
{
	printf("Ho va ten: %s\n",studen->tenSinhVien);
	printf("Ma sinh vien: %s\n",studen->maSinhVien);
	printf("Ten mon hoc: %s, %s, %s\n",studen->tenMonHoc1,studen->tenMonHoc2,studen->tenMonHoc3);
	printf("\n");
}
