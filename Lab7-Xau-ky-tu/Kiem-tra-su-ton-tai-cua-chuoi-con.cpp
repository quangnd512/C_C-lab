#include<conio.h> 
#include<stdio.h> 
#include<string.h> 

/* strstr(chuoi_me, chuoi_con); : Tim chuoi con trong chuoi me
* Neu khong co chuoi con trong chuoi me thi no se tra ve ket qua null
* Neu co chuoi con trong chuoi me thi no se tra ve ket qua tu vi tri cua chuoi con den ket thuc chuoi me
 */

int main() 
{     
	char a[255],b[255];
	printf("Nhap chuoi: ");     
	gets(a);
	printf("Nhap chuoi con muon kiem tra: ");
	gets(b);
	if(strstr(a,b)==NULL){
		printf("Chuoi con khong co mat trong chuoi ban dau.!");
	}else{
		printf("Chuoi con co mat trong chuoi ban dau.!");
	}
	getch(); 
} 
