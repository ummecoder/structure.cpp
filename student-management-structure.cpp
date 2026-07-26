#include <iostream>
using namespace std;
struct student {
    int rollNo;
    string name;
    float marks;
    string course;
};
void displayStudent(student s) {
    cout << " \nRoll NO: " << s.rollNo;
    cout << " \nName: " << s.name;
    cout << " \nCourse: " << s.course;
    cout << " \nMarks: " << s.marks << " \n ";
}
int main() 
{
  student students[50];
    int n=0;
    int choice;

    do{
   cout << "\n--- student Management System ---";
   cout << "\n1. Add Student";
   cout << "\n2. Display Students";
   cout << "\n3. Exit";
   cout << "\nEnter your choice: ";
   cin >> choice;

   if(choice == 1) {
       cout << "Enter Roll No: ";
       cin >> students[n].rollNo;
       cout << "Enter Name: ";
       cin >> students[n].name;
       cout << "Enter Course: ";
       cin >> students[n].course;
       cout << "Enter Marks: ";
       cin >> students[n].marks;
       n++;
       cout << "Student added successfully!";
   }
   else if(choice == 2) {
       for(int i=0; i<n; i++) {
           displayStudent(students[i]);
       }
   }
 } while(choice != 3);
return 0;
}