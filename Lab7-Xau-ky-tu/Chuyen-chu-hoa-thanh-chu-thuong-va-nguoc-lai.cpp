#include<conio.h> 
#include<stdio.h> 
#include<string.h> 

/* Thuat toan
* 
*/

int main() 
{     
	char a[255];
	int len,ascii[255];
	printf("Nhap chuoi: ");     
	gets(a);
	len= strlen(a);
	printf("\nChuoi sau khi chuyen doi la: ");
	for(int i=0;i<len;i++){
		ascii[i] = (int)a[i]; //Chuyen ky tu sang ma ascii
		if((a[i]>='A'&&a[i]<='Z')){ 
			printf("%c",ascii[i]+32); //Chuyen chu hoa sang chu thuong bang cach cong ma ascii vowi 32
		}else if((a[i]>='a'&&a[i]<='z')){
			printf("%c",ascii[i]-32); //Chuyen chu thuong sang chu hoa bang cach nguoc lai
		}else{
			printf("%c",a[i]); //Giu nguyen ky tu khac
		}
	}
	getch(); 
} 
