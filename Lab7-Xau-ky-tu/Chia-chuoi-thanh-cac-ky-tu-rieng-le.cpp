#include<stdio.h>
#include<conio.h>
#include<string.h> //Thu vien cac ham thao tac voi chuoi

/**
* %s: In mot chuoi ra man hinh
* %c: In mot ky tu ra man hinh
*/

char a[100];
int len;
int main()
{
	printf("Nhap mot chuoi bat ky: ");
	gets(a); 
	printf("Chuoi vua nhap la: ");
	len=strlen(a);
	for(int i=0;i<len;i++){
		printf("%3c",a[i]);
	}
	getch();
	
}
