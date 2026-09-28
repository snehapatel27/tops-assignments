#include<iostream>
using namespace std;

class content
{
	public:
		string title;
		string platform;
		int views;
		string status;
		
		void display()
		{
			cout<<"\n title: "<<title;
			cout<<"\n platform: "<<platform;
			cout<<"\n views: "<<views;
			cout<<"\n status: "<<status;
		}
		
};
main()
{
	content c1;
	c1.title="my video";
	c1.platform="instagram";
	c1.views=1500;
	c1.status="published";
	c1.display();
}
