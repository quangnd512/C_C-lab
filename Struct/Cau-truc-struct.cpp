#include<stdio.h>
#include<conio.h>
#include<string.h>


/** Struct
* 1. Khai niem
* Struct - Cau truc la mot loai du lieu trong trong ngon ngu lap trinh C cho phep ban ket hop cac kieu du lieu khac nhau
* Struct giong voi class trong lap trinh huong doi tuong.
*
* 2. Cau truc
* struct Books
* {
*    char  tieude[50];
*    char  tacgia[50];
*    char  chude[100];
*    int   id;
* } book;
* Mot ten_cau_truc co the tuy chon va mot thanh phan dinh nghia la cac bien thuong nhu int i, float j hoac mot dinh nghia bien khac …. 
* Tai phan cuoi cung cua dinh nghia cau truc, truoc dau cham phay, ban co the xac dinh mot hoac nhieu bien cau truc (tuy chon).
*/



/*
* 3. Truy cap cac thanh phan cua cau truc
*/
//struct Books
//{
//	char tieude[50];
//	char tacgia[50];
//	char chude[50];
//	int id;
//};
//int main()
//{
//	struct Books book1; //Khai bao bien book1 la kieu Books
//	struct Books book2;
//	
//	/* thong tin chi tiet quyen sach thu nhat */
//	strcpy(book1.tieude, "Lap trinh C");
//	strcpy(book1.tacgia, "Pham Van At");
//	strcpy(book1.chude, "Ngon ngu lap trinh C");
//	book1.id = 001;
//	
//	/* thong tin chi tiet quyen sach thu hai */
//	strcpy(book2.tieude, "Toi thay hoa vang tren co xanh");
//	strcpy(book2.tacgia, "Nguyen Nhat Anh");
//	strcpy(book2.chude, "Van hoc");
//	book2.id = 002;
//	
//	/* hien thi */
//	printf("Thong tin quyen sach thu nhat.!\n");
//	printf("ID: %d\n",book1.id);
//	printf("Tieu de: %s\n",book1.tieude);
//	printf("Tac gia: %s\n",book1.tacgia);
//	printf("Chu de: %s\n",book1.chude);
//	printf("\n");
//	
//	printf("Thong tin quyen sach thu hai.!\n");
//	printf("ID: %d\n",book2.id);
//	printf("Tieu de: %s\n",book2.tieude);
//	printf("Tac gia: %s\n",book2.tacgia);
//	printf("Chu de: %s\n",book2.chude);
//	getch();
//}



/*
* 4. Cau truc nhu cac tham so ham
*/
//struct Books
//{
//	char tieude[50];
//	char tacgia[50];
//	char chude[50];
//	int id;
//};
//void inthongtinsach(struct Books book); //Goi ham in thong tin sach
//int main()
//{
//   struct Books Book1;        /* Khai bao Book1 la cua kieu Book */
//   struct Books Book2;        /* Khai bao Book2 la cua kieu Book */
// 
//   /* thong tin chi tiet quyen sach thu nhat */
//   strcpy( Book1.tieude, "Lap trinh C");
//   strcpy( Book1.tacgia, "Pham Van At"); 
//   strcpy( Book1.chude, "Ngon ngu lap trinh C");
//   Book1.id = 1234567;
//
//   /* thong tin chi tiet quyen sach thu hai */
//   strcpy( Book2.tieude, "Toi thay hoa vang tren co xanh");
//   strcpy( Book2.tacgia, "Nguyen Nhat Anh");
//   strcpy( Book2.chude, "Van hoc");
//   Book2.id = 6677028;
//
//
//   /* hien thi thong tin Book1 */
//   inthongtinsach(Book1);
//
//   /* hien thi thong tin Book2 */
//   inthongtinsach(Book2);
//
//   getch();
//}
////Ham dinh nghia in thong tin sach
//void inthongtinsach( struct Books book )
//{
//	printf( "Book ID: %d\n", book.id);
//	printf( "Tieu de sach: %s\n", book.tieude);
//	printf( "Tac gia: %s\n", book.tacgia);
//	printf( "Chu de: %s\n", book.chude);
//	printf("\n");
//}



/*
* 5. Con tro toi cau truc
*/
//struct Books
//{
//	char tieude[50];
//	char tacgia[50];
//	char chude[50];
//	int id;
//};
//void inThongTinSach(struct Books *book); //Goi ham inThongTinSach()
//int main()
//{
//	struct Books book1;
//	struct Books book2;
//	
//	book1.id = 001; //Truyen gia tri cho bien id trong struct
//	strcpy(book1.tieude,"Lap trinh C");
//	strcpy(book1.tacgia,"Pham Van At");
//	strcpy(book1.chude,"Ngon ngu lap trinh C");
//	
//	book2.id = 002;
//	strcpy(book2.tieude,"Toi thay hoa vang tren co xanh");
//	strcpy(book2.tacgia,"Nguyen Nhat Anh");
//	strcpy(book2.chude,"Van hoc");
//	
//	//In thong tin bang cach truyen dia chi cua book1
//	inThongTinSach(&book1); //Gan gia tri cho con tro *book bang gia tri cua bien struct book1
//	
//	//In thong tin bang cach truyen dia chi cua book2
//	inThongTinSach(&book2);
//}
//
////Dinh nghia ham inThongTinSach()
//void inThongTinSach(struct Books *book) //Truyen vao con tro cua struct Books 
//{
//	printf("Thong tin sach.!\n");
//	printf("ID sach: %d\n",book->id); //Tro con tro den gia tri id trong struct Books
//	printf("Tieu de: %s\n",book->tieude);
//	printf("Tac gia: %s\n",book->tacgia);
//	printf("Chu de: %s\n",book->chude);
//	printf("\n");
//}
