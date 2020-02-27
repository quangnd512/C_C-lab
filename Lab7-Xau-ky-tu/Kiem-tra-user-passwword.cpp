#include<conio.h> 
#include<stdio.h> 
#include<string.h> 
#include<windows.h> //Thu vien dung cho viec xoa man hinh cosole

/* Thuat toan
* 
*/

int main() 
{     
	char user[255], pass[255], a[255], b[255];
	int dem=0,dung=0;
	
	//Nhap mat khau chuan
	printf("Nhap user: ");
	gets(user);
	printf("Nhap password: ");
	gets(pass);
	system("cls"); //Xoa man hinh cosole
	
	//Nhap mat khau cua ban
	do
	{
		printf("Nhap user cua ban: ");
		gets(a);
		printf("Nhap password cua ban: ");
		gets(b);
		if(strcmp(a,user)!=0||strcmp(b,pass)!=0){
			dem++;
		}else{
			dung=1;
		}
	}while((a!=user||b!=pass)&&(dem!=3)&&(dung!=1));
	
	//Thong bao
	if(dem==3){
		printf("Ban da nhap sai 3 lan.! Xin vui long thu lai.!");
	}else{
		system("cls");
		printf("Ban da dang nhap thanh cong.!");
	}
} 
