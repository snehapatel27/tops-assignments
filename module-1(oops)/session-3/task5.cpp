#include<iostream>
#include<fstream>
using namespace std;
class playList{
	public:
		string name;
		playList(string n){
			name=n;
		}
		~playList(){
			ofstream file("autosave.txt");
			file << "Playlist Name: " << name; 
			file.close();
			cout << "\nPlaylist auto-saved successfully!";
		}
};
main(){
	playList p1("my Favourite");
	cout<<"\n playListname:"<<p1.name;
}
