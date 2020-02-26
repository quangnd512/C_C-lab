#include<stdio.h>
#include<conio.h>
#include<string.h>

#define SIZE 50 

/*
* Su dung struct ben ngoai ham main
*/

struct States
{
	char name[SIZE]; //Ten thanh pho
	float income; //Tong thu nhap
	long int population; //Dan so
	float literacyRate; //Ti le biet doc biet viet
}state[SIZE]; //Goi bien cau truc struct ngoai ham main

int main()
{
	int n,j,k;
	float tenTPDocViet, tenTPThuNhapMax;
	printf("Nhap so luong thanh pho can nhap: ");
	scanf("%d",&n);
	
	//nhap
	for(int i=1;i<=n;i++){
		printf("Thanh pho %d: \n",i);
		printf("Ten: ");
		scanf("%s",&state[i].name);
		fflush(stdin); //Xoa cac ky tu scanf con luu trong may ap dung cho truong hop nhap vao mot du lieu khac kieu
		printf("Tong thu nhap: ");
		scanf("%f",&state[i].income);
		printf("Dan so: ");
		scanf("%ld",&state[i].population);
		printf("Ti le biet doc biet viet: ");
		scanf("%f",&state[i].literacyRate);
		printf("\n");
	}
	
	//hien thi
	printf("Cac thanh pho vua nhap la: \n");
	for(int i=1;i<=n;i++){
		printf("Thanh pho thu %d: \n",i);
		printf("Ten: %s, Tong thu nhap: %f, Dan so: %ld, Ti le biet doc biet viet: %f\n\n",state[i].name,state[i].income,state[i].population,state[i].literacyRate);
	}
	
	//Tim kiem
	/* Thuat toan
	* state[i].income: 20 50 30 40 
	* i              : 1  2  3  4  
	* j              : 
	* tenTPThuNhapMax=0
	* Voi i=1 neu ma state[i].income>tenTPThuNhapMax thi tenTPThuNhapMax=state[i].income va tenTPThuNhapMax = 20 roi j tang len 1 don vi. j tu 0 tang len 1
	* Voi i=2 thi state[i].income=50>tenTPThuNhapMax=20 thi tenTPThuNhapMax=state[i].income va tenTPThuNhapMax = 50 roi j tang len 1 don vi. j tu 1 tang len 2
	* Voi i=3 thi state[i].income=30<tenTPThuNhapMax=50 thoat ra khoi cau dieu kien va j giu nguyen la 2
	* Voi i=4 thi state[i].income=40<tenTPThuNhapMax=50 thoat ra khoi cau dieu kien va j giu nguyen la 2
	* Luc nay ta chi can lay state[j].name tuc la state[2].name la ra ten thanh pho co thu nhap cao nhat
	*/
	j=k=0;
	for(int i=1;i<=n;i++){
		if(state[i].income>tenTPThuNhapMax){
			tenTPThuNhapMax=state[i].income;
			j++;
		}
		if(state[i].literacyRate>tenTPDocViet){
			tenTPDocViet= state[i].literacyRate;
			k++;
		}
	}
	printf("\nTen thanh pho co thu nhap cao nhat la: %s\n",state[j].name);
	printf("Ten thanh pho co ti le nguoi biet chu cao nhat la: %s",state[k].name);
	getch();
}
