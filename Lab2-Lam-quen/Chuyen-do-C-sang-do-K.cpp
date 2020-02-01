#include<stdio.h>
#include<conio.h>
#include<math.h>

int c;
float f;
int main()
{
	printf("Moi nhap do C: ");
	scanf("%d",&c);
	printf("Do K la: %d \n",c+273);
	f = c + 18/(float)10 + 32;
	printf("Do F la: %.2f \n",f);
	getch();
}
