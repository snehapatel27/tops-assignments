#include<iostream>
using namespace std;
class musicPlayer{
	public:
		virtual void player(string song)
		{
			cout<<"playing :"<<song;
		}
		
};
class  spotifyplayer :public musicPlayer{
	public:
		void player(string song)
		{
			cout<<"spotify :"<<song;
		}	
}; 
		
main()
{
	musicPlayer *p = new spotifyplayer(); 
	p->player("Perfect");
	 delete p;
}
