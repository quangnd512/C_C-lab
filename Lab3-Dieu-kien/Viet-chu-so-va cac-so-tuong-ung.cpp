#include<stdio.h>
#include<conio.h>
#include<math.h>

int so;
int main()
{
	printf("Nhap mot so bat ky(0-9): ");
	scanf("%d",&so);
	switch(so){
		case 0: printf("So khong"); break;
		case 1: printf("So mot"); break;
		case 2: printf("So hai"); break;
		case 3: printf("So ba"); break;
		case 4: printf("So bon"); break;
		case 5: printf("So nam"); break;
		case 6: printf("So sau"); break;
		case 7: printf("So bay"); break;
		case 8: printf("So tam"); break;
		case 9: printf("So chin"); break;
		default: printf("Nhap khong dung.! Moi nhap lai.!");
	}
}
