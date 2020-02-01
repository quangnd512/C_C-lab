#include<stdio.h>
#include<conio.h>
#include<math.h>

int luaChon,a,b,tong,hieu,tich;
float thuong;
int main()
{
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	printf("-----------------------------------------------\n");
	printf("Lua chon 1: + \n");
	printf("Lua chon 2: - \n");
	printf("Lua chon 3: * \n");
	printf("Lua chon 4: / \n");
	printf("Lua chon 5: Thoat \n");
	printf("Nhap lua chon: ");
	scanf("%d",&luaChon);
	printf("-----------------------------------------------\n");
	switch(luaChon){
		case 1: 
			tong = a+b;
			printf("%d + %d = %d ",a,b,tong);
			break;
		case 2: 
			hieu = a-b;
			printf("%d - %d = %d ",a,b,hieu);
			break;
		case 3:
			tich = a*b;
			printf("%d * %d = %d ",a,b,tich);
			break;
		case 4:
			thuong = (float)a/b;
			printf("%d / %d = %.2f ",a,b,thuong);
			break;
		case 5: getch(); break;
		default: printf("Nhap khong dung.! Moi nhap lai.!");
	}
}
