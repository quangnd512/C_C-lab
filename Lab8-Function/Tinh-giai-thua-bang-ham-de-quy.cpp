#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Thuat toan:
* Neu a = 0 thi giai thua = 1 
* Neu a = 1 thi giai thua = 1
* Neu a > 1 thi gia thua = a * gai thua cua a-1
*/

int giaiThua(int a){
	if(a==0){
		return 1;
	}else if(a==1){
		return 1;
	}else{
		return a * giaiThua(a-1);
	}
	getch();
}
main(){
	int a;
	printf("Nhap so can tinh: ");
	scanf("%d",&a);
	printf("Giai thua cua %d la: %d",a,giaiThua(a));
}
