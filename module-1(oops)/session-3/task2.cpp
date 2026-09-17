#include<iostream>
using namespace std;
class product{
	public:
		string ProductName;
		float Price;
		float Rating;
		
		product(string ProductName,float Price,float Rating){
			this->ProductName=ProductName;
			this->Price=Price;
			this->Rating=Rating;
				
		}
		void Display(){
		
				cout<<"\n  ProductName:"<<ProductName;
				cout<<"\n Price:"<<Price;
				cout<<"\n Rating:"<<Rating;
		}
};
main(){
	product p1("Phone",30000,4.5);
	p1.Display();
}
