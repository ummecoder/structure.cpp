#include<iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
};

int main() {
    Student students[3];

    for(int i=0; i<3; i++) {
        cout << "Enter name and roll no of student " << i+1 << ": ";
        cin >> students[i].name >> students[i].rollNo;
    }

    cout << "\n--- Student Data ---\n";
    for(int i=0; i<3; i++) {
        cout << students[i].name << " - " << students[i].rollNo << endl;
    }
    return 0;
}