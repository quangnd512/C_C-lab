#include<stdio.h>
#include<conio.h>
#include<math.h>

int hello(char a[255]){
	printf("Welcome to ");
	puts(a); //Hien thi chuoi vua nhap
	getch();
}
int day(char a[255]){
	printf("Have a nice day!");
	getch();
}
main(){
	char a[255];
	gets(a);
	hello(a);
	day(a);
}
