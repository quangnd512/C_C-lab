#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

char a;
int main()
{
	printf("Nhap tu can kiem tra: ");
	scanf("%s",&a);
	switch(a){
		case 'u': printf("\nDay la nguyen am"); break;
		case 'e': printf("\nDay la nguyen am"); break;
		case 'o': printf("\nDay la nguyen am"); break;
		case 'a': printf("\nDay la nguyen am"); break;
		case 'i': printf("\nDay la nguyen am"); break;
		default : printf("\nDay khong phai la nguyen am"); break; 
	}
}
