#include<iostream>
using namespace std;

class song
{
	private:
		string title;
		string artist;
		
	public:
		void setTitle(string t)
		{
			title =t;
		}
		string getTitle()
		{
			return title;
		}
		void setArtist(string a)
		{
			artist = a;
		}
		 string getArtist()
	    {
	        return artist;
	    }
};
main()
{
	song s;
	s.setTitle("tum mile");
	s.setArtist("Arijit Singh");
	cout << "Old Title: " << s.getTitle();
    cout << "Artist: " << s.getArtist();

    s.setTitle("Tum Hi Ho");

    cout << "Updated Title: " << s.getTitle();

}
