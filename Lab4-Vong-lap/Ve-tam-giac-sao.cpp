#include<stdio.h>
#include<conio.h>
#include<math.h>
	
	
int sao;
int main()
{
	printf("Nhap so sao can ve: ");
	scanf("%d",&sao);
	for(int i=1;i<=sao;i++){
		for(int j=1;j<=i;j++){
			printf("  *  ");
		}
		printf("\n");
	}
}
