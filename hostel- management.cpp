#include<iostream>
using namespace std;

struct Room {
    int roomNo;
    string studentName;
    bool isOccupied; // true = occupied, false = empty
    int fees;
};

int main() {
    Room hostel[10]; // 10 rooms

    // Initialize all rooms as empty
    for(int i = 0; i < 10; i++) {
        hostel[i].roomNo = 101 + i;
        hostel[i].isOccupied = false;
        hostel[i].studentName = "None";
        hostel[i].fees = 15000;
    }

    int choice;
    do {
        cout << "\n--- HOSTEL MANAGEMENT SYSTEM ---";
        cout << "\n1. Allocate Room";
        cout << "\n2. Vacate Room";
        cout << "\n3. Show Empty Rooms";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if(choice == 1) { // ALLOCATE
            string name; int r;
            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter Room No: ";
            cin >> r;

            for(int i = 0; i < 10; i++) {
                if(hostel[i].roomNo == r && hostel[i].isOccupied == false) {
                    hostel[i].studentName = name;
                    hostel[i].isOccupied = true;
                    cout << "Room " << r << " allocated to " << name;
                    break;
                }
            }
        }
        else if(choice == 2) { // VACATE
            int r;
            cout << "Enter Room No to vacate: ";
            cin >> r;
            for(int i = 0; i < 10; i++) {
                if(hostel[i].roomNo == r) {
                    hostel[i].isOccupied = false;
                    hostel[i].studentName = "None";
                    cout << "Room " << r << " is now empty";
                }
            }
        }
        else if(choice == 3) { // SHOW EMPTY
            cout << "\n--- Empty Rooms ---";
            for(int i = 0; i < 10; i++) {
                if(hostel[i].isOccupied == false)
                    cout << "\nRoom " << hostel[i].roomNo << " - Fees: " << hostel[i].fees;
            }
        }

    } while(choice!= 4);

    return 0;
}