#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h> //Thu vien chua cac ham malloc

struct node
{
	int data; //Kieu bien luu tru du lieu
	struct node *next; //Khoi tao con tro *next
};

struct node *head = NULL; //Con tro dau
struct node *current = NULL; //Con tro chuoi

//hien thi list
void printList()
{
	struct node *ptr = head; //Tao con tro cho den vi tri head
	printf("\n[head] =>");
	
	while(ptr != NULL){ //Neu con tro bang null
		printf(" %d =>",ptr->data); //In du lieu ra man hinh
		ptr = ptr->next; //Tro con tro den du lieu tiep theo
	}
	printf(" [null]\n"); 
}

//chen link tai vi tri dau tien
void insert(int data)
{
	struct node *link = (struct node*) malloc(sizeof(struct node));/*????????????*/ //Cap phat bo nho cho *link
	
	link->data = data; //link->key = key
	
	link->next =  head; //tro *link toi vi tri dau tien cua node cu
	
	head = link; //gan head = link
}

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   printList();
   return 0;
}

