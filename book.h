#include<iostream>
using namespace std;
class Book
{
	public:
		int bookid;
		string bookname;
		double price;
		int quantity;
		
		
		
		Book(int bookid,string bookname,double price);
	
		
		void acceptquantity(int quantity);
	
		
		void calculate();
	
		
		
		
};
