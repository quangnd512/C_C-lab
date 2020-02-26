#include<stdio.h>
#include<string.h>

/** Thuat toan
* 
*
*
*/

int main() {
   char s[100][100]; //Cho phep nhap nhieu chuoi 
   char t[100]; 
   int i, j,n;
	printf("Nhap so luong chuoi can nhap: ");
	scanf("%d",&n);
    printf("\nNhap %d chuoi bat ky: \n",n);
    //Nhap nhieu chuoi
    for (i = 0; i < n; i++){
		scanf("%s", s[i]);
	}

	for (i = 1; i < n; i++) {
		for (j = 1; j < n; j++) {
    		if (strcmp(s[j - 1], s[j]) > 0) { //strcmp la ham so sanh 2 chuoi. Cau lenh tren co y nghia la chuoi s[j-1] > chuoi s[j]. Neu bang 0 thi hai chuoi bang nhau 
            	strcpy(t, s[j - 1]); // Gan chuoi t = chuoi s[j-1]
            	strcpy(s[j - 1], s[j]); //Gan chuoi s[j-1] = s[j]
            	strcpy(s[j], t); //Gan chuoi s[j] = t
        	}
    	}
	}

   printf("\nSap xep thu tu cua cac chuoi:");
   for (i = 0; i < n; i++){
        printf("\n%s", s[i]);
	}
	return(0);
}

