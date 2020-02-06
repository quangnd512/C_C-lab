#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Phan tich bai toan
* a[i]  : 1 3 2 5 7 3 (n=6)
* i     : 0 1 2 3 4 5 (i<n)
* Phan tu moi = 4
* Vi tri can chen = 3
* i=n;i>=p;i-- =>( i=6;i>=3;i-- => i: 6 5 4 3 )
* a[i] = a[i-1] =>( a[6]=a[5]=3 => a[i]: 1 3 2 2 5 7 3 )
* a[p-1] = phan tu moi. Voi p la vi tri can chen
*/
int main()
{
	int a[100],n;
	printf("Nhap so luong phan tu can nhap: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Phan tu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nCac phan tu vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	//Chen phan tu moi
	int p,phan_tu_moi;
	printf("\nNhap phan tu can chen: ");
	scanf("%d",&phan_tu_moi);
	printf("\nVi tri can chen vao day (<=%d): ",n+1);
	scanf("%d",&p);
	for(int i=n;i>=p;i--){
		a[i]=a[i-1];
	}
	a[p-1]=phan_tu_moi;
	printf("\nDay moi la: ");
	for(int i=0;i<=n;i++){
		printf("%d\t",a[i]);
	}
}
