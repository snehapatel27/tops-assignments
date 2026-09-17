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
class youTuber : public socialMediaUser{
	public:
		string channelName;
		void uploadVideo(string title)
		{
			cout<<"\n video"<<title<< " uploaded to " << channelName;	
		
		}
};
	main()
	{
		youTuber y1;
		y1.userName="sneha";
		y1.followers=1000;
		y1.channelName="sneha teach";
		y1.displayProfile();
		y1.uploadVideo("c++ tutorial");	
	}
