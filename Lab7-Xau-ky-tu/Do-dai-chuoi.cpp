#include<stdio.h>
#include<conio.h>
#include<string.h> //Thu vien cac ham thao tac voi chuoi

// Ham dem do dai chuoi la lam strlen()

char a[100];
int i=0;
int main()
{
	printf("Nhap mot chuoi bat ky: ");
	gets(a);
	while(a[i] != '\0') { // '\0' la ky tu ket thuc chuoi hoac tuong duong voi ky tu NULL
		i++;
	}
   
   printf("Do dai cua chuoi '%s' la: %d", a, i);
   
   return 0;
	
}
