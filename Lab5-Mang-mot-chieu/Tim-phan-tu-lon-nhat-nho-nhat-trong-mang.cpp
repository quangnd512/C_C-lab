#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Thuat toan
* max=a[0],min=a[0]
* Vong lap for tu 0 den n voi i tang
* Neu a[i]>max thi max=a[i] nguoc lai thi min=a[i] 
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
	
	//max,min
	int max=a[0],min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}else{
			min=a[i];
		}
	}
	printf("\nPhan tu lon nhat cua day la: %d",max);
	printf("\nPhan tu nho nhat cua day la: %d",min);
}
