#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fp1, *fp2;
	char a;
	
	//Mo file 1 de doc
	fp1 = fopen("sao-chep-1.txt","r"); //Mo file chi de doc. Neu khong co file thi thong bao khong the mo file.
	if(fp1==NULL){
		printf("Khong the mo file nay.!");
	}
	
	//Mo file 2 de ghi
	fp2 = fopen("sao-chep-2.txt","w"); //Mo file chi de ghi. Neu khong co file thi may se tu dong tao file moi.
	
	//Sao chep file 1 vao file 2
	do{
		a = fgetc(fp1);
		fputc(a,fp2);
	}while(a!=EOF);
	return 0;
}
