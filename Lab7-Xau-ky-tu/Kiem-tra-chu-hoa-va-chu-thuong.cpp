#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	printf("Nhap mot ky tu: ");
	scanf("%c",&a);
	for(int i=0;i<strlen(a);i++){
		if((a[i]>='a'&&a[i]<='z')){
			printf("\nKy tu vua nhap la chu thuong.!");
		}else if((a[i]>='A'&&a[i]<='Z')){
			printf("\nKy tu vua nhap la chu hoa.!");
		}else{
			printf("\nDay la ky tu so hoac ky tu dac biet.!");
		}
	}
}
