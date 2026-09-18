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
class Podcaster : public socialMediaUser{
	public:
		string podcastName;
		void publishEpisode(string episodeTitle){
			cout << "\nEpisode" << episodeTitle << " published on " << podcastName;
		}
}; 
class InstagramInfluencer :public socialMediaUser{
	public:
		void postStory(string storyTitle)
		{
			cout<<"\n"<<userName<<" posted a new story : "<<storyTitle;
		}
};
	main()
	{
		InstagramInfluencer i1;
		i1.userName="sneha";
		i1.followers=1000;
		i1.displayProfile();
		i1.postStory("my new story");
	}
