#include<stdio.h>
#include<string.h>

int dem()
{
	char a[100];
	int dem=0,len;
	printf("Nhap chuoi: ");
	gets(a);
	len = strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]==' '||a[i]=='  '||a[i]=='   '){
			dem++;
		}
	}
	printf("\nCac ky tu khoang trang trong chuoi la: %d",dem);
}
int main()
{
	dem();
}
