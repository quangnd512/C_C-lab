#include<stdio.h>
#include<conio.h>
#include<math.h>

/**Thuat toan:
* So hoan hao la so co tong cac uoc so duong (ngoai tru chinh no) bang chinh no
** Cach lam:
* Buoc 1: Tim cac uoc cua mot so
* - Neu a chia het cho b (a/b) thi a la boi cua b con b la uoc cua a
* - De tim uoc ta se cho vong lap tu 1 den a-1 roi lay a chia cho nhung so tang dan cua vong lap
* - Neu a chia het cho so do thi ta lay so day la uoc cua a
* Buoc 2: Tinh tong cac uoc do
* Buoc 3: So sanh tong voi so ban dau neu bang nhau thi so ban dau la so hoan hao
*/

int a,tong=0;
int main()
{
	printf("Nhap so can kiem tra: ");
	scanf("%d",&a);
	printf("Nhung uoc cua so do la: ");
	for(int i=1;i<a;i++){
		if(a%i==0){
			printf("%d\t",i);
			tong = tong + i;
		}
	}
	if(tong==a){
		printf("\nTong cua cac uoc la: %d\n",tong);
		printf("%d la so hoan hao.!",a);
	}else{
		printf("\nTong cua cac uoc la: %d\n",tong);
		printf("%d khong phai so hoan hao.!",a);
	}
}
