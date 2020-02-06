#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Phan tich bai toan
* 
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
	/*
	* b[i]: 1    2    2    0    0 (b[i] luc dau bang null)
	* a[i]: 2    3    4    3    4 (n=5)
	* i   : 0    1    2    3    4
	* j   :      1    2    3    4
	* dem = 1
	* Voi i=0
	* thi dem=1 va j se chay tu i+1=1 den n-1=4. Luc nay may se so sanh a[i]=2 voi day 3 4 3 4. Vi a[i] khong bang gia tri nao cua day a[j] nen may se chay den cau dieu kien tiep theo
	* Cau dieu kien thu hai voi b[i]!=0 thi b[j] se bang ben dem. Vi b[0]=null khac 0 nen b[i]=1.
	* Voi i=1
	* thi dem=1 va j se chay tu i+1=2 den n-1=4. Luc nay may se so sanh a[i]=3 voi day 4 3 4. Vi a[i] bang mot gia tri cua day a[j] nen cau dieu kien mot thoa man. Luc nay bien dem=2. Va b[j]=0 tuc la b[3]=0.
	* Den cau dieu kien thu hai vi b[1]=null khac 0 nen b[i]=2.
	* Voi i=2
	* thi dem=1 va j se chay tu i+1=3 den n-1=4. Luc nay may se so sanh a[i]=4 voi day 3 4. Vi a[i] bang mot gia tri cua day a[j] nen cau dieu kien mot thoa man. Luc nay bien dem=2. Va b[j]=0 tuc la b[4]=0.
	* Den cau dieu kien thu hai vi b[2]=null khac 0 nen b[i]=2.
	* Voi i=3
	* thi dem=1 va j se chay tu i+1=4 den n-1=4. Luc nay may se so sanh a[i]=3 voi day 4. Vi a[i] khong bang mot gia nao tri cua day a[j] nen may se chay den cau lenh 2.
	* Den cau dieu kien thu hai vi b[3]=0 nen thoat ra khoi vong lap
	* Voi i=4
	* thi dem=1 va j se chay tu i+1=5 den n-1=4. Khong thoa man dieu kien vong lap voi j nen se chuyen luon sang cau dieu kien thu hai.
	* Den cau dieu kien thu hai vi b[4]=0 nen thoat ra khoi vong lap
	*
	* Khi xuat du lieu ra man hinh:
	* ta can xet dieu kien b[i] khac 0 trong vong lap cua i.
	*/ 
	//Dem so lan xuat hien cua cac phan tu
	int dem,b[100];
	for(int i=0;i<n;i++){
		dem=1;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem++;
				b[j]=0;
			}
		}
		if(b[i]!=0){
			b[i]=dem;
		}
	}
	printf("\nTan so xuat hien cua tung phan tu.");
	for(int i=0;i<n;i++){
		if(b[i]!=0){
			printf("\nPhan tu %d xuat hien %d lan.!",a[i],b[i]);
		}
	}
	
}
