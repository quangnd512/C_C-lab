#include<stdio.h>
#include<conio.h>
#include<math.h>

int a;
int main()
{
	printf("Nhap bang nhan: ");
	scanf("%d",&a);
	printf("Bang nhan: \n");
	for(int i = 0; i<10; i++){
		printf("%d * %d = %d\n",a,(i+1),a*(i+1));
	}	
	getch();
}
