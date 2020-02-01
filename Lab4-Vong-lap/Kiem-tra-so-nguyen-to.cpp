#include<stdio.h>
#include<conio.h>
#include<math.h>

int n,count=0;
int main()
{
	/** Thuat toan
	* 1. Neu so do be hon 2, ket luan khong phai so nguyen to
	* 2. Ðem so uoc cua x trong doan tu 2 den can bac hai cua x. 
	* Neu so do khong co uoc nao trong doan tu 2 den can bac hai cua x thi no la so nguyen to. Nguoc lai thi khong phai. 
	* Nhu vay, neu ban dem tu 1 thay vi 2 thi x là so nguyen to khi ta dem duoc 1 uoc so trong doan tu 1 den can bac hai cua x
	*/
	
	//Code
	printf("Nhap so can kiem tra: ");
	scanf("%d",&n);
	if(n<2){
		printf("So vua nhap khong phai so nguyen to.!");
	}else{
		for(int i=2;i<=sqrt(n);i++){ //Tim uoc trong doan 2 den can bac 2 cua n
			if(n%i==0){
				count++;
			}
		}
		if(count==0){ //Neu khong co uoc nao 
			printf("So vua nhap la so nguyen to.!");
		}else{ //Neu co 1 hoac nhieu uoc
			printf("So vua nhap khong phai so nguyen to.!");
		}
	}
}
