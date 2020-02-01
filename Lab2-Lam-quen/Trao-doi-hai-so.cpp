#include<stdio.h>
#include<conio.h>
#include<math.h>

int a,b,c;
int main()
{
	a =5;
	b= 14;
	printf("a = %d, b = %d\n",a,b);
	c=a; a=b; b=c;
	printf("Khi trao doi: a = %d, b = %d\n",a,b);	
	getch();	
}
