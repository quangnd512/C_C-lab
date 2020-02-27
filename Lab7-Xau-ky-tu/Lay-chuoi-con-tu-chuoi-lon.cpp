#include<stdio.h>
#include<string.h>

/** Thuat toan
* 
*
*
*/

int main() 
{
	char a[100];
	int n,b,len,dem;
	printf("Nhap chuoi: ");
	gets(a);
	len =strlen(a);
	printf("\nVi tri ky tu bat dau lay chuoi: ");
	scanf("%d",&b);
	printf("\nSo phan tu cua chuoi con: ");
	scanf("%d",&n);
	printf("\nChuoi con la: ");
	for(int i=b-1;i<len;i++){ 
		printf("%c",a[i]);
		dem++;
		if(dem==n){ //Neu bien dem bang n nhap vao thi thoat ra khoi vong lap
			break;
		}
	}
}

