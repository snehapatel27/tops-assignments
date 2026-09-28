#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char username[50];
    int count = 0;


    ofstream file;
    file.open("insta_followers.txt");

    file << "sneha27\n";
    file << "ashav27\n";
    file << "diya2230\n";
    file << "amita01\n";

    file.close();

   
    ifstream readFile;
    readFile.open("insta_followers.txt");

    while(readFile.getline(username, 50))
    {
        count++;
    }

    readFile.close();

    cout << "Total Followers: " << count;

    return 0;
}
