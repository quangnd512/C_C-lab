#include<stdio.h>
#include<conio.h>

/** Con tro
* Mot con tro - pointer là mot bien ma trong do gia tri cua no la dia chi cua bien khac.
*
** Khai bao con tro
* int *conTro : Khai bao con tro kieu so nguyen
* float *conTro : Khai bao con tro kieu so thuc
* char *conTro : Khai bao con tro kieu string
*
** Dieu khien con tro
* phanTuMang = &a[0] : Dieu khien con tro den vi tri a[0]
* printf("%3d",*phanTuMang); : Hien thi con tro - *phanTuMang la gia tri cua con tro
*
*
** Dia chi va gia tri cua con tro
* Toan tu dia chi: &
* Toan tu gia tri: *, *&a = a
*
*
** VD 
* int a = 10;
* int *p;
* p = &a; tuc la:
* 				gia tri			dia chi
* a				   10			34DC4567
* p				34DC4567		98FE56AC
*
*/
int a[100],n;
int *phanTuMang;
int main()
{
	printf("Moi nhap so phan tu mang: ");
	scanf("%d",&n);
	phanTuMang = &a[0]; //Con tro tro den vi tri a[0]
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",phanTuMang);
		phanTuMang++; //Tang con tro len 1 vi tri
	}
	phanTuMang = &a[0]; 
	printf("Mang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%3d\t",*phanTuMang);
		phanTuMang++;
	}
}
