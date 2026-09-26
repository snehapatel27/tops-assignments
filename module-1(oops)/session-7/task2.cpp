#include<iostream>
#include<fstream>
using namespace std;
main(){
	char data[20];
	ifstream  File;
	File.open("my_fav_songs.txt",ios::in);
	while(File.getline(data,30)){
		cout<<data<<"\n";
	}
	File.close();
}


