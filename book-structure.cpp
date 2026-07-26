#include<iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int pages;
};

int main() {
    Book b1;
    cout << "Enter book title, author and pages: ";
    cin >> b1.title >> b1.author >> b1.pages;

    cout << "\nBook Details:\n";
    cout << b1.title << " by " << b1.author << " - " << b1.pages << " pages";
}