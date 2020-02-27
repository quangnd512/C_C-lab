#include <stdio.h>
#include <conio.h>
#include <string.h>

/* Ly thuyet
* So sanh giua puts va printf
* puts va printf: De co muc dich de in ra man hinh
* Nhung puts duoc uu tien hon de in chuoi vi no ngan gon hon
* Viec su dung % de in ra man hinh thuong cho ra nhung ket qua khong mong muon va van de bao mat khong duoc dam bao
*/
 
main()
{
char a[100];
char b[100];
char c[100];
int p=0,r=0,i=0;
int t=0;
int x,g,s,n=0,o;
//clrscr();
 
puts("Nhap chuoi: ");
gets(a);
puts("\nNhap chuoi con: ");
gets(b);
printf("Nhap vi tri can chen: ");
scanf("%d",&p);
r = strlen(a);
n = strlen(b);
i=0;
 
//Gan chuoi a cho chuoi c
while(i <= r){ //Neu i nho hon hoac bang do dai chuoi a thi 
	c[i]=a[i];
	i++;
}
s = n+r; //Do dai cua 2 chuoi cong lai
o = p+n; //Do dai cua vi tri can chen nhap tu ban phim + do dai cua chuoi con
 
// Adding the sub-string
for(i=p;i<s;i++){
	x = c[i];
	if(t<n){
		a[i] = b[t];
		t=t+1;
	}
	a[o]=x;
	o=o+1;
}
 
printf("%s", a);
getch();
}
