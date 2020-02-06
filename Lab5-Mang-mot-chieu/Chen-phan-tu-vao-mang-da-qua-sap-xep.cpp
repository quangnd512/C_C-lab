#include<stdio.h>
#include<conio.h>
#include<math.h>


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
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	//Chen phan tu moi
	int p=0,phan_tu_moi;
	printf("\nNhap phan tu moi can chen: ");
	scanf("%d",&phan_tu_moi);
	/* xac dinh vi tri de chen phan tu moi.*/ 
    for (int i=0;i<n;i++){						//a[i] : 1 2 3 5 6 (n=5)
    											//i    : 0 1 2 3 4 
        if (phan_tu_moi < a[i]){				//Neu phan_tu_moi=4 nghia la 4<5
            p = i; break;						//Thi p=i va p=3. Sau do thoat ra khoi dong lenh
        }
    }
	/* di chuyen vi tri tat ca phan tu ben canh phai cua mang */
    for (int i=n;i>=p;i--){ 					//i	   : 5 4 3 
        a[i] = a[i-1];							//a[i] : a[5]=a[4]=6, a[4]=a[3]=5, a[3]=a[2]=3
    }											//Day moi luc nay la: 1 2 3 3 5 6 
    /* chen phan tu moi vao vi tri thich hop */
    a[p] = phan_tu_moi;							//a[3] = 4 => Day moi sau khi chen la: 1 2 3 4 5 6
    printf("Day moi sau khi chen la: ");
    for (int i=0;i<=n;i++){
        printf("%d\t",a[i]);
    }
}
