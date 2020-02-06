#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Phan tich bai toan
* a[i]  : 1 3 2 5 7 3 (n=6)
* i     : 0 1 2 3 4 5 (i<n)
* Vi tri can xoa = 3
* Voi i=pos-1;i<n-1;i++(Voi pos la vi tri can xoa) => i: 2 3 4
* Thi a[i]=a[i+1] => a[2]=a[3]=5, a[3]=a[4]=7, a[4]=a[5]=3
* Luc nay day la : 1 3 5 7 3 3 
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
	
	//Xoa phan tu
	int pos;
	printf("\nNhap vi tri phan tu can xoa: ");
	scanf("%d",&pos);
	for(int i=pos-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	printf("\nDay so moi la: ");
	for(int i=0;i<n-1;i++){
		printf("%d\t",a[i]);
	}
	
}
