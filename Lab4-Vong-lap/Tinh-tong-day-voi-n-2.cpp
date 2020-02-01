#include<stdio.h>
#include<conio.h>
#include<math.h>
	
/**Thuat toan
* 9 + 99 + 999 = (10 - 1) + (100 - 1) + (1000 - 1) = (10 + 100 + 1000) - (1 + 1 + 1) 
* => (10^1 + 10^2 + 10^3) - (1 * 3) = (10+10^2+10^3) - (1*3) = (10+10^2+10^3)-3
* Buoc 1: Tao vong lap for cho i chay tu 1 den a sau do dung cong thuc pow(a, n)
* pow(a, n) = a^n
* Buoc 2: ap dung cong thuc pow(10,i) va cong tong so lai
* Buoc 3: thoat ra khoi vong lap lay tong - n
*/

//Code
long int a, b, n, tong=0, count=0;
int main()
{
	printf("Nhap so cac so: ");
	scanf("%ld",&a);
	for(int i=1;i<=a;i++){
		b = pow(10, i);
		tong = tong + b;
	}
	printf("\nTong cac so la: %ld",(tong-a));
}
