#include<stdio.h>
#include<conio.h>
#include<math.h>
	
	
int n;
int main()
{
	printf("Nhap bang nhan can xem: ");
	scanf("%d",&n);
	for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",i,n,i*n);
    }
    getch();
}
