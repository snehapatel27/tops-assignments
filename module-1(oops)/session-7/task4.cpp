#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i;
    char product[50];
    float price;

    ofstream file;
    file.open("wishlist.txt");

    for(i = 0; i < 3; i++)
    {
        cout << "\nEnter product name: ";
        cin >> product;

        cout << "Enter price: ";
        cin >> price;

        file << product << " " << price << endl;
    }

    file.close();


    ifstream readFile;
    readFile.open("wishlist.txt");

    cout << "\n--- Wishlist ---\n";

    while(readFile >> product >> price)
    {
        cout << "Product: " << product
             << " | Price: Rs." << price << endl;
    }

    readFile.close();

    return 0;
}
