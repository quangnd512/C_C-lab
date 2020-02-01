#include<stdio.h>
#include<conio.h>
#include<math.h>

int chieuCao;
int main()
{
	printf("Nhap chieu cao (cm): ");
	scanf("%d",&chieuCao);
	if(chieuCao<150){
		printf("Ban qua lun.!");
	}else if(chieuCao<175){
		printf("Chuc mung.! Ban la nguoi can doi");
	}else if(chieuCao<185){
		printf("Ban kha cao day");
	}else{
		printf("0.!! Ban qua cao.!");
	}
	getch();
}
