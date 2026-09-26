#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file;
	file.open("my_fav_songs.txt",ios::out);
	file<<"perfect\n";
	file << "Shape of You\n";
    file << "Believer\n";
    file << "Let Me Down Slowly\n";
    file << "Faded\n";
    file.close();
    

}
