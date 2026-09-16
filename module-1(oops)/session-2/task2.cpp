#include<iostream>
using namespace std;
class palylist{
	public:
		string name;
		bool ispublic;
		void togglepublic(){
			ispublic=!ispublic;
		}
};
main(){
	palylist p1;
	p1.ispublic=true;
	cout<<"\n before toggle"<<p1.ispublic;
	p1.togglepublic();
	cout<<"\n after first toggle"<<p1.ispublic;
	p1.togglepublic();
	cout<<"\n after secound toggle"<<p1.ispublic;
}
