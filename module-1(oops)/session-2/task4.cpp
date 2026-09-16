#include<iostream>
using namespace std;
class playList{
	public:
		string name;
		string songs[10];
		int songCount;
		int i;
		playList()
		{
			songCount=0;
		}
		
		void addSong(string songTitle){
			songs[songCount]=songTitle;
			songCount++;
		} 
		void display(){
			cout<<"song list:";
			for(i=0;i<3;i++){
				cout<<"\n"<<songs[i];
			}
		}
};
main(){
	playList p1;
	p1.addSong("Tum Hi Ho");
	p1.addSong("love me like you");
	p1.addSong("Apna Banale");
	p1.display();
}
