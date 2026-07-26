#include<iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    Student s1; 

    s1.name = "Ali";
    s1.rollNo = 101;
    s1.marks = 85.5;

    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.rollNo << endl;
    cout << "Marks: " << s1.marks;
}