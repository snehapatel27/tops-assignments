#include<iostream>
using namespace std;
class foodOrder{
	public:
	int orderId;
	char resturantName[50];
	bool delivered;
	void markDelivered(){
		delivered = false;
	 	cout << "\nOrder is not Delivered";
	}
};
main(){
	foodOrder f1;
	cout<<"\n enter orderId";
	cin>>f1.orderId;
	cout<<"\n enter resturantName";
	cin>>f1.resturantName;
	int delivered = false; 
	f1.markDelivered(); 
	cout << "\nDelivered: "<< f1.delivered;
}
