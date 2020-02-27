#include<stdio.h>
#include<string.h>

/* Phan tich bai toan
* 1. Nhap 2 chuoi
* 3. Dung ham strstr de tim kiem chuoi con trong chuoi 1
* 4. Neu ham tra ve null thi thong bao khong tim thay chuoi. Neu ham tra ve ket qua thi gan ket qua cho 1 bien char la n
* 5. Tim strlen cho chuoi cha va chuoi n sau do tru di se ra vi tri ma chuoi con bat dau
*
*/
int main()
{
	char a[100],b[100],n[100];
	int len1, len2, num;
	printf("Nhap chuoi: ");
	gets(a);
	len1 = strlen(a);
	printf("Nhap chuoi con: ");
	gets(b);
	if(strstr(a,b)==NULL){
		printf("Chuoi con khong co trong chuoi cha.!");
	}else{
		strcpy(n,strstr(a,b));
		len2 = strlen(n);
		num = len1 -len2;
		printf("Chuoi con '%s' nam trong chuoi '%s' va nam o vi tri thu %d.!",b,a,num);
	}
}
