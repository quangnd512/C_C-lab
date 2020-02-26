#include<stdio.h>
#include<conio.h>
#include<string.h>

char a[100], b[100];
int len1, len2, flag=0, dem=1;
int main()
{
	printf("Nhap chuoi a bat ky: ");
	gets(a);
	printf("Nhap chuoi b bat ky: ");
	gets(b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2){
		printf("\nHai chuoi co do dai khong bang nhau.!");
	}else{
		printf("\nHai chuoi co do dai bang nhau va ");
		for(int i=0;i<strlen(a);i++){
			if(a[i]!=b[i]){
				flag=1;
			}else{
				flag=0;
			}
		}
	}
	if(flag==0){
		printf("hai chuoi bang nhau.!");
	}else{
		printf("hai chuoi khong bang nhau.!");
	}
	getch();
	
}
