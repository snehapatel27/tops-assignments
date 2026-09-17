#include<iostream>
using namespace std;
class movie{
	public:
		string movieName;
		int price;
		float rating;
		movie(string name,int p,float r){
			movieName=name;
			price=p;
			rating=r;
		}
		movie(movie &m){
			movieName=m.movieName;
			price=m.price;
			rating=m.rating;
		}
		void Display(){
			cout<<"\n movie name:"<<movieName;
			cout<<"\n price:"<<price;
			cout<<"\n rating:"<<rating<<"/5";
		}
};
main(){
	movie m1("lalo",250,5);
	movie m2(m1);
	cout << "\nOriginal Movie:";
	m1.Display(); 
    cout << "\n\nCopied Movie:"; 
	m2.Display();
}
