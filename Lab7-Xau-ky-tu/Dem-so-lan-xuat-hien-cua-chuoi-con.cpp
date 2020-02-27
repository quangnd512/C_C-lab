#include<stdio.h>
#include<string.h>


int main()
{
	char s1[100];char s2[100],*p;
	int d;
	printf("Nhap chuoi: ");
	gets(s1);
	printf("\nNhap chuoi con: ");
	gets(s2);
	d=0;
	p=strstr(s1,s2);
	while(p)
		{
		d++; 
		p++; //p tang len mot ky tu
		p=strstr(p,s2);
		}
	printf("\nSo lan '%s' co mat trong '%s' la: %d",s2,s1,d);
}
