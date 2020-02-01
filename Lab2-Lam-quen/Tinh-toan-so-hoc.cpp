#include<stdio.h>
#include<conio.h>
#include<math.h>

float a,c;
int b,d;
int main()
{
	a = (float)(-1+4*6);
	b = (35+5)%7; //Day (%) la phep lay du. Khi 1 so chia cho 1 so khac thi chi co the co cac chi so du nhat dinh. VD: 1 so lay % cua 6 thi cac so du bieu thi là 0, 1, 2, 3, 4, 5 voi so 0 la phep chia het
	c = (14+-4*6/(float)11);
	d = (2+15/6*1-7)%2;
	printf("-1 + 4 * 6 = %.2f \n",a);
	printf("(35 + 5) /o 7 = %d \n",b);
	printf("14 + -4 * 6 / 11 = %.2f \n",c);
	printf("2 + 15 / 6 * 1 - 7 /o 2 = %d \n",d);
	getch();
	
}
