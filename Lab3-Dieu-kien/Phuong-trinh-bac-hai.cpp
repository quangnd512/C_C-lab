#include<stdio.h>
#include<conio.h>
#include<math.h>

int a, b, c;
float delta, x1, x2, x, x12, canDelta;
int nhap()
{
	printf("Giai phuong trinh bac hai.!\n");
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Nhap c = ");
	scanf("%d",&c);
}
int tinh()
{
	if(a>0){
		delta = (float)b*b+4*a*c;
		canDelta = sqrt(delta);
		x12=-b/(2*a);
		x1=(-b+canDelta)/(2*a);
		x2=(-b-canDelta)/(2*a);
		printf("Phuong trinh bac hai la: %d.x^2 + %d.x + %d = 0\n",a,b,c);
		printf("-------------------------------------------------\n");
		if(delta>0){
			printf("Phuong trinh co 2 nghiem phan biet\n");
			printf("x1 = %.2f\n",x1);
			printf("x2 = %.2f",x2);
		}else if(delta==0){
			printf("Phuong trinh co 1 nghiem kep\n");
			printf("x1 = x2 = %.2f",x12);
		}else{
			printf("Phuong trinh vo nghiem.\n");
		}
	}else{
		x=(float)-c/b;
		if(b!=0){
			printf("Phuong trinh bac nhat la: %d.x + %d = 0\n",b,c);
			printf("-------------------------------------------------\n");
			if(c!=0){
				printf("Nghiem x = %.2f",x);
			}else{
				printf("Phuong trinh co nghiem bang 0.!\n");
			}
		}else{
			if(c!=0){
				printf("Phuong trinh vo nghiem\n");
			}else{
				printf("Phuong trinh co nghiem bang 0.!\n");
			}
		}
	}
}
int main()
{
	nhap();
	tinh();
	getch();
}
