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
class Podcaster : public socialMediaUser{
	public:
		string podcastName;
		void publishEpisode(string episodeTitle){
			cout << "\nEpisode" << episodeTitle << " published on " << podcastName;
		}
}; 

	main()
	{
		Podcaster p1;
		p1.userName="sneha";
		p1.followers=1000;
		p1.podcastName="teach talks";
		p1.displayProfile();
		p1.publishEpisode("c++ basic");	
	}
