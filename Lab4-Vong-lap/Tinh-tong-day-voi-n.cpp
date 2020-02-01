#include<stdio.h>
#include<conio.h>
#include<math.h>
	
/**Thuat toan
* 1 - x^2/2! + x^4/4! - x^8/8! = 1*1*(1/2^0)*x^0 + (-1)*1*(1/2^1)*x^2 + 1*1*(1/2^2)*x^4 + (-1)*1*(1/2^3)*x^8
* => 1*1*(1/2^0)*(x*x)*0 + (-1)*1*(1/2^1)*(x^2)^1 + 1*1*(1/2^2)*(x^2)^2 + (-1)*1*(1/2^3)*(x^2)^3
* Buoc 1: Vong lap do while voi n bat dau tu 0, cho n tang 1 don vi và dem so n
* Buoc 2: Vong lap for tu i=1 den i=n roi tinh giai thua
* Buoc 3: Neu n chan thi tinh tong day chan (*1)
* Buoc 4: Neu n le thi tinh tong day le (*-1)
* Buoc 5: Cong 2 tong la de thu ket qua cuoi cung
*/

//Code
long int n=-1,a,s,count=0,tongchan=0,tongle=0,tong=0,gt=0;
int main()
{
	printf("Nhap gia tri cua x: ");
	scanf("%ld",&a);
	printf("Nhap so day so: ");
	scanf("%ld",&s);
	do{
		n++;
		if(n%2==0){
			tongchan = tongchan + (1*1*(1/(pow(2, n)))*pow((a*a), n));
		}else{
			tongle = tongle + (-1)*1*(1/(pow(2, n)))*pow((a*a), n);
		}
		tong = tongchan + tongle;
		count++;
	}while(count<s);
	printf("Tong = %ld",tong);
}
