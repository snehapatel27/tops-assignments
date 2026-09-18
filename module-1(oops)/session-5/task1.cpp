#include<iostream>
using namespace std;
class paymentProcess{
	public:
		void processPayment(int amount)
		{
			cout<<"\n only amount is : "<<amount;
		}
		void processPayment(int amount, string couponcode)
		{
			cout<<"\n  amount and coupencode method : ";
			int finalAmount= amount;
			 if(couponcode == "SAVE10")
		        {
		            finalAmount = amount - (amount * 10 / 100);
		        }
		
		        cout << "Final Amount: " << finalAmount;
		}
};
main()
{
	paymentProcess p1;
	p1.processPayment(1000);
	p1.processPayment(1000,"SAVE10");
}
