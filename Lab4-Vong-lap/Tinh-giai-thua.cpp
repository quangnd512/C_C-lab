#include<stdio.h>
#include<conio.h>
#include<math.h>
	
	
int giaiThua,kq=1;
int main()
{
	printf("Nhap giai thua: ");
	scanf("%d",&giaiThua);
	for(int i=1;i<=giaiThua;i++){
		kq=kq*i;
	}
	printf("Giai thua cua %d bang: %d",giaiThua,kq);
}
