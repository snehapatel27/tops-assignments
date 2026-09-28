#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Structure for content
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
    int choice;

    // Load content from file
    ifstream inFile("content_list.txt");

    Content temp;

    while (inFile >> temp.title >> temp.platform >> temp.views >> temp.status)
    {
        contents.push_back(temp);
    }

    inFile.close();

    do
    {
        cout << "\n================================";
        cout << "\n     CONTENT MANAGEMENT SYSTEM";
        cout << "\n================================";
        cout << "\n1. Add Content";
        cout << "\n2. Display Content";
        cout << "\n3. Update Status";
        cout << "\n4. Delete Content";
        cout << "\n5. Exit";
        cout << "\n================================";

        cout << "\nEnter your choice: ";
        cin >> choice;

        // =========================
        // 1. ADD CONTENT
        // =========================
        if (choice == 1)
        {
            Content newContent;

            cout << "\nEnter title: ";
            cin >> newContent.title;

            cout << "Enter platform: ";
            cin >> newContent.platform;

            cout << "Enter views: ";
            cin >> newContent.views;

            cout << "Enter status: ";
            cin >> newContent.status;

            contents.push_back(newContent);

            // Save to file
            ofstream outFile("content_list.txt");

            for (int i = 0; i < contents.size(); i++)
            {
                outFile << contents[i].title << " "
                        << contents[i].platform << " "
                        << contents[i].views << " "
                        << contents[i].status << endl;
            }

            outFile.close();

            cout << "\nContent added successfully!";
        }

        // =========================
        // 2. DISPLAY CONTENT
        // =========================
        else if (choice == 2)
        {
            if (contents.empty())
            {
                cout << "\nNo content available!";
            }
            else
            {
                cout << "\n========== CONTENT LIST ==========\n";

                for (int i = 0; i < contents.size(); i++)
                {
                    cout << "\nContent Number: " << i + 1;
                    cout << "\nTitle: " << contents[i].title;
                    cout << "\nPlatform: " << contents[i].platform;
                    cout << "\nViews: " << contents[i].views;
                    cout << "\nStatus: " << contents[i].status;
                    cout << "\n--------------------------------";
                }
            }
        }

        // =========================
        // 3. UPDATE STATUS
        // =========================
        else if (choice == 3)
        {
            if (contents.empty())
            {
                cout << "\nNo content available!";
            }
            else
            {
                int contentNumber;
                string newStatus;

                cout << "\n========== CONTENT LIST ==========\n";

                for (int i = 0; i < contents.size(); i++)
                {
                    cout << i + 1 << ". "
                         << contents[i].title << " | "
                         << contents[i].platform << " | "
                         << contents[i].views << " | "
                         << contents[i].status << endl;
                }

                cout << "\nEnter content number to update: ";
                cin >> contentNumber;

                if (contentNumber < 1 ||
                    contentNumber > contents.size())
                {
                    cout << "\nInvalid content number!";
                }
                else
                {
                    cout << "Enter new status: ";
                    cin >> newStatus;

                    // Update status
                    contents[contentNumber - 1].status = newStatus;

                    // Rewrite file
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
                }
            }
        }

        // =========================
        // 4. DELETE CONTENT
        // =========================
        else if (choice == 4)
        {
            if (contents.empty())
            {
                cout << "\nNo content available!";
            }
            else
            {
                int contentNumber;

                cout << "\n========== CONTENT LIST ==========\n";

                for (int i = 0; i < contents.size(); i++)
                {
                    cout << i + 1 << ". "
                         << contents[i].title << " | "
                         << contents[i].platform << " | "
                         << contents[i].views << " | "
                         << contents[i].status << endl;
                }

                cout << "\nEnter content number to delete: ";
                cin >> contentNumber;

                // Validate content number
                if (contentNumber < 1 ||
                    contentNumber > contents.size())
                {
                    cout << "\nInvalid content number!";
                }
                else
                {
                    // Delete content
                    contents.erase(contents.begin() + (contentNumber - 1));

                    // Rewrite file
                    ofstream outFile("content_list.txt");

                    for (int i = 0; i < contents.size(); i++)
                    {
                        outFile << contents[i].title << " "
                                << contents[i].platform << " "
                                << contents[i].views << " "
                                << contents[i].status << endl;
                    }

                    outFile.close();

                    cout << "\nContent deleted successfully!";

                    // Display updated list
                    cout << "\n\n===== UPDATED CONTENT LIST =====\n";

                    if (contents.empty())
                    {
                        cout << "No content available!";
                    }
                    else
                    {
                        for (int i = 0; i < contents.size(); i++)
                        {
                            cout << i + 1 << ". "
                                 << contents[i].title << " | "
                                 << contents[i].platform << " | "
                                 << contents[i].views << " | "
                                 << contents[i].status << endl;
                        }
                    }
                }
            }
        }

        // =========================
        // 5. EXIT
        // =========================
        else if (choice == 5)
        {
            cout << "\nThank you! Program closed.";
        }

        else
        {
            cout << "\nInvalid choice! Please try again.";
        }

    } while (choice != 5);

    return 0;
}
