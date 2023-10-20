#include <iostream>
#include"book.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	
	int bookid;
	string bookname;
	double bookprice;
	int bookquantity;
	
	
	cout<<"enter bookid,bookname,bookprice,bookquantity";
	cin>>bookid>>bookname>>bookprice>>bookquantity;
	
	
	Book b(bookid,bookname,bookprice);
	b.acceptquantity(bookquantity);
	b.calculate();
	
}
