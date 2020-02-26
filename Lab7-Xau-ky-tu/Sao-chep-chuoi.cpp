#include<stdio.h>
#include<conio.h>
#include<string.h>

char a[100],b[100];
int len;
int main()
{
	printf("Nhap mot chuoi bat ky: ");
	gets(a);
	len=strlen(a);
	for(int i=0;i<len;i++){
		b[i]=a[i];
	}
	printf("\nChuoi sao chep la: %s",b);
	getch();
	
}
