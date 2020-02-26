#include<stdio.h>
#include<conio.h>
#include<string.h>

struct SV
{
	char name[40]; //40 
	char sex[40];  //40
	float point;  //4
};// ->40+40+4=84

int n; //4
float a; //4
double b; //8
long int c; //4
char d[50]; //50

int main()
{
	struct SV s;
	int size1, size2, size3, size4, size5, size6;
	size1 = sizeof(s); //Size of struct
	size2 = sizeof(n); //Size of int
	size3 = sizeof(a); //Size of float
	size4 = sizeof(b); //Size of double
	size5 = sizeof(c); //Size of long
	size6 = sizeof(d); //Size of char
	printf("Size of struct: %d\n", size1);
	printf("Size of int: %d\n", size2);
	printf("Size of float: %d\n", size3);
	printf("Size of double: %d\n", size4);
	printf("Size of long: %d\n", size5);
	printf("Size of char: %d\n", size6);
}
