#include<stdio.h>  
#include<conio.h>  
#include<math.h>

/** Thuat toan
* VD: 0 1 1 2 3 5 8 13
* Goi i la so phan tu can hien thi
* Neu i bang 0 thì tra ve so là 0
* Neu i bang 1 thi tra ve so la 1 
* Neu i lon hon 1 thi day so la i-1 + i-2
* 
* Buoc 1: Ham de quy day fibo
* - Neu a=0 thi tra ve so 0
* - Neu a=1 thi tra ve so 1
* - Neu a=2 thi tra ve so a-1 + a-2
* Buoc 2: Vong lap do while de lap so gia tri can hien thi 
*/

//Ham kiem tra fibo
int fibo(int n)
{
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}

//Ham duyet mang
void DuyetMang(int a)
{
	int n=-1, count=0;
	do{
		n++;
		printf("%5d",fibo(n));
		count++;
	}while(count<a);
}

//Main
main()  
{  
	int a;
	printf("Nhap so cac so hien thi: ");
	scanf("%d",&a);
	printf("Day %d so fibonacci la: ",a);
	DuyetMang(a);
	
}  
