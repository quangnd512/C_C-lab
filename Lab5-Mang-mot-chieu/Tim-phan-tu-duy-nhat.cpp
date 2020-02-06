#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Thuat toan
* a[i]   : 8 2 2 4 2 6
* i (i=0): 0 1 2 3 4 5  (i<n)
* j (j=0): 0 1 2 3 4    (j<i)
* k (i+1):   1 2 3 4 5  (k<n)
* Gia su neu n=6 thi i chay tu 0 den 5, j chay tu 0 den 4, k chay tu 1 den 5
* Voi: 
*	+) i bang 0 thi a[i0]=8 
*   +) j se bang i-1=-1 va chua thoa man dieu kien chay nen bien demj=0
*   +) k se bang i+1=1 den n-1=5 thì ( a[k1]=2, a[k2]=2, a[k3]=4, a[k4]=2, a[k5]=6 ). Vi a[i] khong trung voi day a[k] nen bien demk=0
* Voi:
*	+) i bang 1 thi ( a[i1]=2 ) 
*   +) j se bang i-1=0 ( a[j0]=8 ) Vi a[i] khong bang a[j] nen bien demj=0
*   +) k se bang i+1=2 den n-1=5 thì ( a[k2]=2, a[k3]=4, a[k4]=2, a[k5]=6 ). Vi a[i] trung voi day a[k] nen bien demk=2
* Voi:
*	+) i bang 2 thi ( a[i2]=2 )
*   +) j se bang 0 den i-1=1 ( a[j0]=8, a[j1]=2 ) Vi a[i] bang a[j1] nen bien demj=1
*   +) k se bang i+1=3 den n-1=5 thì ( a[k3]=4, a[k4]=2, a[k5]=6 ). Vi a[i] khong trung voi day a[k] nen bien demk=1
* Voi:
*	+) i bang 3 thi ( a[i3]=4 ) 
*   +) j se bang 0 den i-1=2 ( a[j0]=8, a[j1]=2, a[j2]=2 ) Vi a[i] khong bang a[j] nen bien demj=0
*   +) k se bang i+1=4 den n-1=5 thì ( a[k4]=2, a[k5]=6 ). Vi a[i] trung voi day a[k] nen bien demk=0
* Voi:
*	+) i bang 4 thi ( a[i4]=2 ) 
*   +) j se bang 0 den i-1=3 ( a[j0]=8, a[j1]=2, a[j2]=2, a[j3]=4 ) Vi a[i] bang a[j] nen bien demj=2
*   +) k se bang i+1=5 den n-1=5 thì ( a[k5]=6 ). Vi a[i] khong trung voi day a[k] nen bien demk=0
* Voi:
*	+) i bang 5 thi ( a[i5]=6 ) 
*   +) j se bang 0 den i-1=4 ( a[j0]=8, a[j1]=2, a[j2]=2, a[j3]=4, a[j4]=2 ) Vi a[i] khong bang a[j] nen bien demj=0
*   +) k se bang i+1=6 = n nen khong thoa man vi the bien demk=0
* Neu bien demj=0 va bien demk=0 thi in ra a[i]
* Thoat khoi vong lap i
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
	
	//In cac phan tu duy nhat
	printf("\nCac phan tu duy nhat la: ");
	for(int i=0;i<n;i++){
		int demj=0,demk=0;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				demj++;
			}
		}//8426
		for(int k=i+1;k<n;k++){
			if(a[i]==a[k]){
				demk++;
			}
		}//82246
		if(demk==0&&demj==0){
			printf("%d\t",a[i]);
		}
	}
}
