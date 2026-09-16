#include<iostream>
using namespace std;
class foodOrder{
	public:
		int orderId;
		string restaurantName;
		bool isdelivered;
		
//		foodOrder()
//		{
//		}
		
		foodOrder(const foodOrder &o)
		{
			orderId=o.orderId;
			restaurantName=o.restaurantName;
			isdelivered=o.isdelivered;
			
		}
};
main()
{
	foodOrder o1;
	o1.orderId=101;
	o1.restaurantName="Testy";
	o1.isdelivered=false;
	
	foodOrder f1(o1);
	cout << "Order ID: " << f1.orderId ;
	cout << "Restaurant: "<< f1.restaurantName; 
	cout << "Delivered: "<< f1.isdelivered;
	
}
