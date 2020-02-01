#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Thuat toan:
* Goi n trong ham fibo la so fibonacci cua day
* Neu n = 0 thi tra ve gia tri 0
* Neu n = 1 thi tra ve gia tri 1
* Neu n > 1 thi tra ve fibo(n-1) + fibo(n-2)
* Tao them 1 ham co tham so n co vong lap do while voi i = -1, va bien dem count = 0
* Trong vong lap tang i len 1, tang bien dem len 1 
* Xet dieu kien neu bien dem bang bien tham so n thi in ra gia tri i trong ham fibo
* dieu kien ket thuc cua vong lap la bien dem nho hon bien tham so n
*/

int dkfibo(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return dkfibo(n-1) + dkfibo(n-2);
	}
}

int fibo(int n){
	int i=-1, count=0;
	do{
		i++;
		count++;
		if(count==n){
			printf("%5d",dkfibo(i));
		}
	}while(count<n);
}
main(){
	int a;
	printf("Nhap vi tri phan tu trong day: ");
	scanf("%d",&a);
	printf("So fibonacci o vi tri thu %d la: ",a);
	fibo(a);
}
