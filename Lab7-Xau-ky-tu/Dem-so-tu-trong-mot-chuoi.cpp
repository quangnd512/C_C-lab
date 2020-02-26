#include<stdio.h>
#include<conio.h>
#include<string.h>

char a[100];
int len, dem=1;
int main()
{
	printf("Nhap mot chuoi bat ky: ");
	gets(a); 
	printf("Chuoi vua nhap la: %s",a);
	len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]==' '||a[i]=='\n'||a[i]=='\t'){
			dem++;
		}
	}
	printf("\nChuoi vua nhap co %d tu.!",dem);
	getch();
	
}
