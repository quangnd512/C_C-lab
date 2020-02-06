#include<stdio.h>
#include<conio.h>
#include<math.h>

/** Thuat toan
* Mang 1 voi a[i]: 1 3 5 7
* Mang 2 voi b[j]: 2 4 6 8
* Mang tron c[k] voi k=i+j
* Goi bien h la chi so cua mang c[k] voi h=0
* Voi vong lap i=0 den i<n voi n la do dai mang a[i] thi: c[h]=a[i] va h tang len mot don vi
* Voi vong lap j=0 den j<m voi m la do dai mang b[j] thi: c[h]=b[j] va h tang len mot don vi
* 
*/

int a[100],b[100],c[200],n,m,h=0;
int main()
{
	//Nhap mang 1
	printf("Nhap so luong phan tu can nhap cua mang 1 la: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Phan tu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nCac phan tu vua nhap cua mang 1 la: ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
		c[h]=a[i]; //tron mang
		h++;
	}
	
	//Nhap mang 2
	printf("\nNhap so luong phan tu can nhap cua mang 2 la: ");
	scanf("%d",&m);
	for(int j=0;j<m;j++){
		printf("Phan tu %d: ",j+1);
		scanf("%d",&b[j]);
	}
	printf("\nCac phan tu vua nhap cua mang 2 la: ");
	for(int j=0;j<m;j++){
		printf("%d\t",b[j]);
		c[h]=b[j]; //tron mang
		h++;
	}
	//a[i]: 1 2 7 5 (n=4) 
	//i   : 0 1 2 3
	//j   :   1 2 3
	//Goi bien temp
	/* Voi i=0 thi a[i]=1 
	* thi j se chay tu i+1=1 den n-1=3: Neu a[i]<a[j] thi a[i]=1
	* Voi i=1 thi a[i]=2 
	* thi j se chay tu i+1=2 den n-1=3: Neu a[i]<a[j] thi a[i]=2
	* Voi i=2 thi a[i]=7 
	* thi j se chay tu i+1=3 den n-1=3: Neu a[i]>a[j] thi temp=a[i]=7, a[i]=a[j]=5, a[j]=temp=7. Vay a[i]=5.
	* Voi i=3 thi a[i]=7 
	* thi j se chay tu i+1=4 n loai.
	*/
	
	//In mang tron
	int temp=0;
	printf("\nCac phan tu cua mang tron la: ");
	for(int i=0;i<m+n;i++){
		for(int j=i+1;j<m+n;j++){
			if(c[i]>c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(int i=0;i<m+n;i++){
		printf("%d\t",c[i]);
	}
	
}
