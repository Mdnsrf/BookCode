#include<iostream>
#include "book.h"
using namespace std;



		int bookid;
		string bookname;
		double price;
		int quantity;
	
		
		Book::Book(int bookid,string bookname,double price)
		{
			this->bookid=bookid;
			this->bookname=bookname;
			this->price=price;
		}
		
		void Book::acceptquantity(int quantity)
		{
			this->quantity=quantity;
		}
		
		void Book::calculate()
		{
			int total=quantity*price;
			cout<<"bookid :"<<bookid<<"bookname :"<<bookname;
			cout<<"the total price ="<<total;
		}
		
		
		

