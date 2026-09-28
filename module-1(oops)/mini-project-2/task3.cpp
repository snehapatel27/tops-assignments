#include<iostream>
#include<fstream>
using namespace std;

void displayContent()
{
    string title;
    string platform;
    int views;
    string status;
    
    ifstream file;
    file.open("content_list.txt");

    int number = 1;

    cout << "\n===== Content List =====\n";

    while(file >> title >> platform >> views >> status)
    {
        cout << number << ". "
             << "Title: " << title
             << " | Platform: " << platform << endl;

        number++;
    }

    file.close();
}

int main()
{
    displayContent();

    return 0;
}
