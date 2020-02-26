#include<stdio.h>
#include<conio.h>
#include<string.h>

char a[100];
int len, chuSo=0, chuCai=0, kyTu=0;
int main()
{
	printf("Nhap mot chuoi bat ky: ");
	gets(a);
	len=strlen(a);
	for(int i=0;i<len;i++){
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){ // Neu a[i] bang tu a->z hoac A->Z thi chu cai tang len 1
			chuCai++;
		}else if(a[i]>='0'&&a[i]<='9'){ // Neu a[i] bang tu 0->9 thi chu so tang len 1
			chuSo++;
		}else{ //Con lai thi ky tu tang len 1
			kyTu++;
		}
	}
	printf("\nChuoi %s co %d tu.!",a,chuCai);
	printf("\nChuoi %s co %d so.!",a,chuSo);
	printf("\nChuoi %s co %d ky tu.!",a,kyTu);
	getch();
	
}
