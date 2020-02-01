#include<stdio.h>
#include<conio.h>
#include<math.h>

int ngay;
int main()
{
	printf("Nhap mot so bat ky(1-7): ");
	scanf("%d",&ngay);
	switch(ngay){
		case 1: printf("Thu hai"); break;
		case 2: printf("Thu ba"); break;
		case 3: printf("Thu tu"); break;
		case 4: printf("Thu nam"); break;
		case 5: printf("Thu sau"); break;
		case 6: printf("Thu bay"); break;
		case 7: printf("Chu nhat"); break;
		default: printf("Nhap khong dung.! Moi nhap lai.!");
	}
}
