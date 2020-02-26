#include<stdio.h>
#include<conio.h>
#include<string.h>

#define SIZE 50

struct Swims
{
	char tname[SIZE];
	char pname[SIZE];
	int avg;
};

int main()
{
	struct Swims swim[SIZE];
	int n;
	printf("Nhap so luong sinh vien tham gia: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Nhap ten sinh vien thu %d: \n",i);
		printf("Ten nguoi choi: ");
		scanf("%s",&swim[i].tname);
		printf("Ten truong: ");
		scanf("%s",&swim[i].pname);
		fflush(stdin);
		printf("Diem so: ");
		scanf("%d",&swim[i].avg);
	}
	
	//Sap sep
	struct Swims temp;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(swim[i].avg<swim[j].avg){
				temp = swim[i];
				swim[i] = swim[j];
				swim[j] = temp;
			}
		}
	}
	
	//Hien thi
	printf("\n\nBang xep hang: \n");
	printf("Ten SV\tTen truong\tDiem so\n");
	for(int i=1;i<=n;i++){
		printf("%s\t%s\t\t%d\n",swim[i].tname,swim[i].pname,swim[i].avg);
	}
}
