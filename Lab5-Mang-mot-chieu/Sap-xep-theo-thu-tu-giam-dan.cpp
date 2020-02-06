#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Thuat toan
* a[i]   : 1 4 5 2 6
* i      : 0 1 2 3 4 
* j(i+1) :   1 2 3 4 
* temp=0
* Neu a[i]>a[j]
* Voi i=0 thi a[i]=1
*	+) voi j=1: thi a[j]=4, a[i]<a[j] nen khong doi. Day luc nay la: 1 4
*	+) voi j=2: thi a[j]=5, a[i]<a[j] nen khong doi. Day luc nay la: 1 4 5
*	+) voi j=3: thi a[j]=2, a[i]<a[j] nen khong doi. Day luc nay la: 1 4 5 2
*	+) voi j=4: thi a[j]=6, a[i]<a[j] nen khong doi. Day luc nay la: 1 4 5 2 6
* Voi i=1 thi a[i]=4
*	+) voi j=2: thi a[j]=5, a[i]<a[j] nen khong doi. Day luc nay la: 1 4 5
*	+) voi j=3: thi a[j]=2, a[i]>a[j] nen temp=a[i]=4, a[i]=a[j]=2, a[j]=temp=4. Day luc nay la: 1 2 5 4
*	+) voi j=4: thi a[j]=6, a[i]<a[j] nen khong doi. Day luc nay la: 1 2 5 4 6
* Voi i=2 thi a[i]=5
*	+) voi j=3: thi a[j]=4, a[i]>a[j] nen temp=a[i]=5, a[i]=a[j]=4, a[j]=temp=5. Day luc nay la: 1 2 4 5 6
*	+) voi j=4: thi a[j]=6, a[i]<a[j] nen khong doi. Day luc nay la: 1 2 4 5 6
* Voi i=3 thi a[i]=5
*	+) voi j=4: thi a[j]=6, a[i]<a[j] nen khong doi. Day luc nay la: 1 2 4 5 6
* Vay day sau khi sap xep la: 1 2 4 5 6
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
	
	//xap xep
	int temp=0;
	printf("\nDay sau khi sap xep la: ");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
