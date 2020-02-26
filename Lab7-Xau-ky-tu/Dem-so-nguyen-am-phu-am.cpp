#include<stdio.h>
#include<conio.h>
#include<string.h>

char a[100];
int len, nguyenAm=0, phuAm=0;
int main()
{
	printf("Nhap mot chuoi bat ky: ");
	gets(a);
	len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]=='u'||a[i]=='e'||a[i]=='o'||a[i]=='a'||a[i]=='i'||a[i]=='U'||a[i]=='E'||a[i]=='O'||a[i]=='A'||a[i]=='I'){
			nguyenAm++;
		}else{
			phuAm++;
		}
	}
	printf("\nSo nguyen am trong chuoi la: %d",nguyenAm);
	printf("\nSo phu am trong chuoi la: %d",phuAm);
	getch();
	
}
