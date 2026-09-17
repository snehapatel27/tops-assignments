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
class GamingYouTuber : public youTuber{
	public:
		string gameName;
		void streamGame(string gameName)
		{
			cout<<"\n"<<userName<<"is now streaming"<<"\t"<<gameName<<"on"<<channelName;
		}
};

	main()
	{
		GamingYouTuber g1;
		g1.userName="sneha";
		g1.followers=1000;
		g1.channelName="sneha teach";
		g1.displayProfile();
		g1.gameName="super mariyo";
		g1.streamGame("super mariyo");
	// 	g1.uploadVideo("gaming video");	
	}
