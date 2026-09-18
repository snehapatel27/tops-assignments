#include<iostream>
#include<string>
using namespace std;
class flipkart{
	public:
		void searchProduct(string productName)
		{
			cout<<"\n searching product : "<<productName;
			cout<<"\n product found : "<<productName;
		}
		
		void searchProduct(string productName , string catagory)
		{
			cout<<"\n searching product : "<<productName;
			cout<<"\n category  : "<<catagory;
			cout<<"\n product found in : "<<catagory;
			
		}
};
main()
{
	flipkart f1;
	f1.searchProduct("phone");
	f1.searchProduct("phone","electronics");
}

