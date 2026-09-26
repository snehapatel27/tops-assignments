#include<iostream>
using namespace std;
class socialMediaUploder{
	public:
		void uplodcontent()
		{
			cout<<"uploding content on social media";
		}
};
class instagramUploder : public socialMediaUploder{
	public:
		void uplodcontent()
		{
			cout<<"\n instagram : uploding photos and links";
		}
};
class youtubUploder : public socialMediaUploder{
	public:
		void uplodcontent()
		{
			cout<<"\n youtub : uploding video";
		}
};
main()
{
	instagramUploder instagram;
	youtubUploder youtube;
	
	instagram.uplodcontent();
	youtube.uplodcontent();
	

}
