#include<iostream>
#include<fstream>
using namespace std;

class content
{
	public:
		string title;
		string platform;
		int views;
		string status;
		
		void addContent()
		{
			cout<<"enter the title:";
			cin>>title;
			cout<<"enter the platform:";
			cin>>platform;
			cout<<"enter views";
			cin>>views;
			cout<<"enter status:";
			cin>>status;
			
			ofstream file;
			file.open("content_list.txt", ios::app);

			file << title << " "
			     << platform << " "
			     << views << " "
			     << status << " ";

			file.close();

			cout << "\nContent saved successfully!\n";
		
		}
};
main()
{
	content c1;
	int choice;
	
	do
	{
		cout<<"\n enter your choice:";
		cout<<"\n 1.add new content";
		cout<<"\n 2.exit";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				c1.addContent();
				break;
				
			case 2:
				cout<<"\n exit";
				break;
				
			default:
				cout<<"wrong choice";
		}	
	}while(choice!=2);
}
