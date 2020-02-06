#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Thuat toan
* a[i]  : 1 2 2 5 (n=4)
* i     : 0 1 2 3
* j(i+1):   1 2 3
* Voi: i=0 thi a[i]=1
* Thi j chay tu i+1=1 cho den n-1=3 voi (a[j1]=2, a[j2]=2, a[j3]=4). Vi a[i] khac a[j] nen bien dem=0
* Voi: i=1 thi a[i]=2
* Thi j chay tu i+1=2 cho den n-1=3 voi (a[j2]=2, a[j3]=4). Vi a[i] bang a[j] nen bien dem=1 va thoat khoi chuong chinh bang lenh break 
*	vi neu khong co lenh break thi vong lap se tiep tuc chay voi i=2 nhu vay nó se cong don bien dem vao va lam cho chuong trinh bi sai
* Voi: i=2 thi a[i]=2
* Thi j chay tu i+1=3 cho den n-1=3 voi (a[j3]=4). Vi a[i] khac a[j] nen bien dem=0
* Voi: i=3 thi a[i]=5
* Thi j chay tu i+1=3 = n cho nen bien dem=1
*/

int a[100],n,dem=0;
int main()
{
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
	
	//Dem phan tu giong nhau
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem++;
			}
		}
		break;
	}
	printf("\nSo chu so giong nhau la: %d\n",dem);
}
