#include<stdio.h>
#include<conio.h>
#include<math.h>

char hang;
int main()
{
	printf("Nhap diem sinh vien(E,V,G,A,F): ");
	scanf("%c",&hang);
	switch(hang){
		case 'E': printf("Hoc luc cua ban la: Xuat sac"); break;
		case 'V': printf("Hoc luc cua ban la: Rat gioi"); break;
		case 'G': printf("Hoc luc cua ban la: Gioi"); break;
		case 'A': printf("Hoc luc cua ban la: Trung binh"); break;
		case 'F': printf("Hoc luc cua ban la: Truot"); break;
		default: printf("Nhap khong dung.! Moi nhap lai.!");
	}
}
