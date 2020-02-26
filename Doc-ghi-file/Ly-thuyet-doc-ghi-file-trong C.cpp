#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

/** Ly thuyet
* 1. Che do khi lam viec voi file
* a) r : Mo file da ton tai voi muc dich doc
* b) w : Mo file voi muc dich ghi. Neu file chua ton tai thi file moi duoc tao ra. Chuong trinh bat dau ghi tu phan mo dau cua file
* c) a : Mo file van ban cho viec ghi vao phan tiep theo cua van ban. Neu file chua ton tai thi file moi duoc tao ra. Chuong trinh se ghi noi dung tiep noi vao phan cuoi cua file da ton tai
* d) r+ : Mo file van ban voi muc dich doc va ghi
* e) w+ : Mo file van ban voi muc dich doc va ghi. No se xoa sach noi dung cua file da ton tai hoac tao moi file neu file chua ton tai.
* f) a+ : Mo file van ban voi muc dich doc va ghi. No tao file moi neu khong duoc ton tai. No se doc tu dau den cuoi file va ghi tiep theo vao phan duoi cung cua file
*
*
*
* 2. Mo file trong C
* Cu phap: FILE *fopen( const char *ten_file, const char *che_do );
* trong do: che_do la cac muc truy cap khac nhau o phan 1.
* - Neu ban thao tac voi cac file nhi phan, ban co the co cac cach truy xuat thay cho cac truong hop tren nhu sau: "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
*
*
*
* 3. Dong file trong C
* Cu phap: int fclose(FILE *fp);
*
*
*
* 4. Ghi du lieu vao file trong C
* - int fputc( int c, FILE *fp ); : Ghi cac ky tu voi gia tri tham so c. Tra ve gia tri la ky tu duoc ghi neu thanh cong va EOF neu co loi
* - int fputs( const char *s, FILE *fp ); : Ghi cac chuoi. Tra ve gia tri khong am neu thanh cong va EOF neu co loi
* hoac co the ghi chuoi ra file bang cach: int fprintf(FILE *fp, const char *fomat,...);
*
*
*
* 5. Doc file trong C
* - int fgetc( FILE * fp ); : Doc mot ky tu tu mot file 
* - char *fgets( char *buf, int n, FILE *fp ); : doc n-1 ky tu tu mot file. No copy chuoi doc den bo dem buf, gan ky tu null vao ket thuc chuoi. 
* hoac co the doc chuoi bang cach: int fscanf(FILE *fp, const char *format, ...);
*
*
*
* 6. Nhap - xuat nhi phan
* size_t fread(void *ptr, size_t kich_co_cua_cac_phan_tu, size_t so_phan_tu, FILE *ten_file);
* size_t fwrite(const void *ptr, size_t kich_co_cua_cac_phan_tu, size_t so_phan_tu, FILE *ten_file);
* 
*/

//VD:
int main()
{
	FILE *fp;
	char buff[255]; 
	
	//Ghi file
	fp = fopen("vidu1.txt","w+"); //Mo file de ghi va doc
	fprintf(fp, "Vi du ve tao file...\n"); //Viet chuoi kieu 1
	fputs("Vi du 2 ve su dung fputs...\n",fp); //Viet chuoi kieu 2
	fclose(fp); //Dong file

	//Doc file	
	fp = fopen("vidu1.txt","r"); //Mo file de doc
	fscanf(fp, "%s", buff ); //Doc file bang fscanf. Khi gap dau cach dau tien thi nos ket thuc doc
	printf("1. %s\n", buff);
	
	fgets(buff,255,fp); //Doc file bang fgets. No se doc cac tu con lai den khi gap ki tu xuong dong
	printf("2. %s\n",buff);
	
	fgets(buff,255,fp);
	printf("3. %s\n",buff);
	fclose(fp);
}

