#include<stdio.h>
#include<conio.h>
#include<math.h>

int tuoi;
int main()
{
	printf("Nhap tuoi cua ban: ");
	scanf("%d",&tuoi);
	if(tuoi>=18){
		printf("Xin chuc mung.! Ban da du tuoi bau cu.! Hay dung la phieu bau cu cua ban de xay dung dat nuoc nhe.!");
	}else{
		printf("Xin loi.! Ban chua du tuoi bau cu.! Ban hay cho %d nam nua de thuc hien quyen cong dan nhe.!",18-tuoi);
	}
	getch();
}
