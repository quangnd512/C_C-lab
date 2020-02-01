#include<stdio.h>
#include<conio.h>
#include<math.h>


/** Thuat toan
* 1. Tao mot vong lap de doc day so tu a den n
* 2. Mot vong lap o trong de kiem tra tung so trong day a den n co phai la so nguyen to khong
* 3. Neu uoc cua so do bang 0 va so do lon hon mot thi in ra so so nguyen to 
*/
	
//Code
int a,n;
int main()
{
	printf("Nhap so bat dau cua day: ");
	scanf("%d",&a);
	printf("Nhap so ket thuc cua day: ");
	scanf("%d",&n);
	printf("Day so nguyen to la: ");
	for (int num = a; num < n; ++num)
    {
        int count = 0;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && num > 1)
            printf("%d\t", num);
    }
}
