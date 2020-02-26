#include<stdio.h>
#include<math.h>
#include<string.h>

/** Thuat toan
* a[i]    : q   u   a   n    g    1  2  3  @   u
* b[i]    : null -> vong lap for voi i tu 0 den 255 roi reset b[i]=0 muc dich cho cac phan tu cua mang b bang 0
* i       : 0   1   2   3    4    5  6  7  8   9
* ascii   : 113 117 97  110  103  1  2  3  64  117
* b[ascii]: 1   1   1   1    1    1  1  1  1   2
*
*/

char a[100];
int len,ascii,b[255],max=0;
int main()
{
	printf("Nhap chuoi: ");
	gets(a);
	len = strlen(a);
	for(int i=0;i<255;i++){
		b[i]=0;
	} //gan cho b[i] = 0
	
	for(int i=0;i<len;i++){
		ascii=(int)a[i]; //Gan ky tu a[i] thanh so ascii
		b[ascii]++; //Tang b[ascii] len mot don vi
	}
	for(int i=0;i<255;i++){
		if(b[i]>b[max]){
			max=i;
		}
	}
	printf("Ky tu '%c' xuat hien nhieu nhat va xuat hien %d lan.!",max,b[max]);
}
