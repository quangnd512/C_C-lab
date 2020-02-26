#include<stdio.h>
#include<math.h>
#include<string.h>

/** 
*
*/

char a[100];
int len,ascii=0,temp=0;
int main()
{
	printf("Nhap chuoi: ");
	gets(a);
	len = strlen(a);
	
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if((int)a[i]>(int)a[j]){ //Neu so ascii cua a[i]> so ascii cua a[j]
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nCac ky tu theo thu tu tang dan la: ");
	for(int i=0;i<len;i++){
		printf("%c\t",a[i]);
	}
}
