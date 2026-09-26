#include<iostream>
#include<fstream>
using namespace std;
main(){
	int i ;
	char name[30];
	 char data[100];
	ofstream file;
	file.open("my_fav_songs.txt",ios::app);
	for(i=0;i<1;i++)
	{
		cout<<"\n enter the song";
		 cin.getline(name, 100);
		file<<name<<"\n";
	}
	file.close();
	
	
}
