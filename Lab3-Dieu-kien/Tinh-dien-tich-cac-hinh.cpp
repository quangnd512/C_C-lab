#include<stdio.h>
#include<conio.h>
#include<math.h>

int luaChon;
int main()
{
	printf("Lua chon 1: Tinh dien tich hinh tron \n");
	printf("Lua chon 2: Tinh dien tich hinh chu nhat \n");
	printf("Lua chon 3: Tinh dien tich hinh tam giac \n");
	printf("Nhap lua chon: ");
	scanf("%d",&luaChon);
	switch(luaChon){
		int a,b,c,d,e,si;
		float s,stg;
		case 1: 
			printf("Nhap ban kinh hinh tron: ");
			scanf("%d",&a);
			s = 3.14*(float)a*a;
			printf("Dien tich hinh tron la: %.2f ",s); 
			break;
		case 2:  
			printf("Nhap chieu dai HCN: ");
			scanf("%d",&b);
			printf("Nhap chieu rong HCN: ");
			scanf("%d",&c);
			si = b*c;
			printf("Dien tich hinh CN la: %d ",si); 
			break;
		case 3: 
			printf("Nhap chieu dai day cua tam giac: ");
			scanf("%d",&d);
			printf("Nhap chieu cao cua tam giac: ");
			scanf("%d",&e);
			stg = (float)(d*e)/2;
			printf("Dien tich hinh tam giac la: %.2f ",stg); 
			break;
		default: printf("Nhap khong dung.! Moi nhap lai.!");
	}
}
