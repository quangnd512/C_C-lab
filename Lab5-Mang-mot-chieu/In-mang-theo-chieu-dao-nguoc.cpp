#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Thuat toan
* Cho vong lap chay tu so phan tu lon nhan ve khong va vong lap giam se lay duoc mang theo chieu dao nguoc
* Cho i chay tu n den i>=0 va i giam sau do in ra cac phan tu cua mang
*
*/

int a[100],n;
int main()
{
	printf("Nhap so luong phan tu can nhap: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Phan tu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nCac phan tu vua nhap la: ");
	for(int i=0;i<n;i--){
		printf("%d\t",a[i]);
	}
	printf("\nCac phan tu duoc in theo chieu dao nguoc la: ");
	for(int i=n-1;i>=0;i--){
		printf("%d\t",a[i]);
	}
}
