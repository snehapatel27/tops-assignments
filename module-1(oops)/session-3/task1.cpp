#include<iostream>
using namespace std;
class playList{
	public:
		string name;
		
		playList()
		{
			name ="defualt constructor";
			cout<<"\n welcome to my playlist";
		}
		
};
main()
{
	playList p1;
	cout << "\n Playlist Name: " << p1.name;
	
}
