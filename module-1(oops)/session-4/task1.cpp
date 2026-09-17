#include<iostream>
using namespace std;
class socialMediaUser{
	public:
		string userName;
		float followers;
		
		void displayProfile(){
			cout<<"\n USERNAME:"<<userName;
			cout<<"\n FOLLOWERS:"<<followers;
		}
	};
	main()
	{
		socialMediaUser s1;
		s1.userName="sneha";
		s1.followers=1000;
		s1.displayProfile();	
	}
