#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Content
{
    string title;
    string platform;
    int views;
    string status;
};

int main()
{
    vector<Content> contents;

    // Read file
    ifstream file("content_list.txt");

    Content c;

    while (file >> c.title >> c.platform >> c.views >> c.status)
    {
        contents.push_back(c);
    }

    file.close();

    // Display list
    cout << "\n--- Content List ---\n";

    for (int i = 0; i < contents.size(); i++)
    {
        cout << i + 1 << ". "
             << contents[i].title << " "
             << contents[i].platform << " "
             << contents[i].views << " "
             << contents[i].status << endl;
    }

    if (contents.size() == 0)
    {
        cout << "No content found!";
        return 0;
    }

    // Select content
    int choice;

    cout << "\nEnter content number to update: ";
    cin >> choice;

    if (choice < 1 || choice > contents.size())
    {
        cout << "Invalid content number!";
        return 0;
    }

    // New status
    string newStatus;

    cout << "Enter new status: ";
    cin >> newStatus;

    // Update status
    contents[choice - 1].status = newStatus;

    // Overwrite file
    ofstream outFile("content_list.txt");

    for (int i = 0; i < contents.size(); i++)
    {
        outFile << contents[i].title << " "
                << contents[i].platform << " "
                << contents[i].views << " "
                << contents[i].status << endl;
    }

    outFile.close();

    cout << "\nStatus updated successfully!";

    return 0;
}
