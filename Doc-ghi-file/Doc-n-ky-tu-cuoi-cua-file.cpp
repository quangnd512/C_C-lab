#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	int num;
	long lenght;
	
	printf("Nhap gia tri muon doc: ");
	scanf("%d",&num);
	
	fp = fopen("file-bai-2.txt","r");
	if(fp==NULL){
		puts("Khong the mo file nay.!");
		exit(1);
	}
	
	fseek(fp,0,SEEK_END); //Thiet lap vi tri doc file: vi tri thu 0 o cuoi file
	lenght = ftell(fp); //Tinh do dai cua file
	fseek(fp,(lenght-num),SEEK_SET); //Thiet lap vi tri doc file: vi tri thu lenght-mun den dau file
	
	do{
		ch = fgetc(fp);
		putchar(ch);
	}while(ch!=EOF);
	fclose(fp);
	return(0);
}
