#include<stdio.h>  
#include<conio.h>  
#include<math.h>

/** Thuat toan
* VD: 153 = 1^3 + 5^3 + 3^3
* Buoc 1: Tao ham kiem tra so amstrong
* - Goi n tren ham
* - Tao vong lap while voi n>0 
* - Tach cac chu so bang cach: goi r = n%10 de lay phan du hang don vi cua so do. Sau do lay lap phuong so do 
* - Tiep tuc chia n cho 10 de loai bo hang don vi di
* - Cuoi cung gia tri can lay la bien sum
* - Ra ngoai vong lap roi so sanh sum voi so ban dau neu bang nhau thi so a la so amstrong va tra ve gia tri 1, neu sai tra ve gia tri 0
* Buoc 2: Tao ham duyet day so
* - Tao vong lap for de duyet tu a den n. Neu so i thoa man dieu kien cua ham kiem tra thi liet ke ra
*/

//Ham kiem tra Amstrong
int KTAT(int n)
{
	int r,sum=0,tmp;
	tmp=n; //Gan bien tam bang n
	while(tmp>0){
		r=tmp%10;
		sum=sum+(r*r*r);
		tmp=tmp/10;
	}
	if(sum==n){
		return 1;
	}else{
		return 0;
	}
}

//Ham duyet mang
void DuyetMang(int a, int b)
{
	for(int i=a;i<=b;i++){
		if(KTAT(i)==1){
			printf("%5d",i);
		}
	}
}

//Main
main()  
{  
	int a,b;
	printf("Nhap so bat dau day: ");
	scanf("%d",&a);
	printf("Nhap so ket thuc day: ");
	scanf("%d",&b);
	DuyetMang(a,b);
	
}  
