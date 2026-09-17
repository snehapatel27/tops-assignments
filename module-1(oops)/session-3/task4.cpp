#include<iostream>
using namespace std;
class Ticket
{
	public:
		~Ticket(){
			cout<<"\n saving your ticket...";
		}
};
main()
{
	Ticket *t = new Ticket();
	cout<<"\n Ticket book successfully..";
//	delete t;
}
