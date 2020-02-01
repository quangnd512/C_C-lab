#include<stdio.h>
#include<conio.h>
#include<math.h>

//Ham kiem tra so hoan hao
int KTSHH(int n){
	int tong = 0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			tong = tong + i;
		}
	}
	if(tong==n){
		return 1; //Dung tra ve 1
	}else{
		return 0; //Sai tra ve 0
	}
}

//Ham liet ke so hoan hao
int lietke(int a, int b){
	for(int i=a; i<=b; i++){
		if(KTSHH(i)==1){
			printf("%5d",i);
		}
	}
}

int main()
{
	int a,b;
	printf("Nhap so bat dau: ");
	scanf("%d",&a);
	printf("Nhap so ket thuc: ");
	scanf("%d",&b);
	printf("Nhung so hoan hao la: ");
	lietke(a,b);
}
