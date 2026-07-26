#include<iostream>
using namespace std;

struct MenuItem {
    int id;
    string name;
    float price;
};

struct Order {
    int itemId;
    int quantity;
};

int main() {
    // ===== MENU =====
    MenuItem menu[5] = {
        {1, "Burger", 300},
        {2, "Pizza", 800},
        {3, "Biryani", 450},
        {4, "ColdDrink", 100},
        {5, "Fries", 200}
    };

    Order orders[20];
    int orderCount = 0;
    float totalBill = 0;

    cout << "--- WELCOME TO RESTAURANT ---";
    cout << "\n--- MENU ---";
    for(int i = 0; i < 5; i++) {
        cout << "\n" << menu[i].id << ". " << menu[i].name << " - Rs " << menu[i].price;
    }

    int choice;
    do {
        cout << "\n\nEnter Item ID to order, 0 to Generate Bill: ";
        cin >> choice;

        if(choice > 0 && choice <= 5) {
            cout << "Enter Quantity: ";
            cin >> orders[orderCount].quantity;
            orders[orderCount].itemId = choice;
            orderCount++;
            cout << "Item Added to Order!";
        }
    } while(choice!= 0);

    // ===== BILL =====
    cout << "\n\n--- YOUR BILL ---";
    for(int i = 0; i < orderCount; i++) {
        for(int j = 0; j < 5; j++) {
            if(menu[j].id == orders[i].itemId) {
                float itemTotal = menu[j].price * orders[i].quantity;
                cout << "\n" << menu[j].name << " x " << orders[i].quantity << " = Rs " << itemTotal;
                totalBill += itemTotal;
            }
        }
    }
    cout << "\n----------------------";
    cout << "\nTOTAL BILL: Rs " << totalBill;
    cout << "\nThank You! Visit Again";

    return 0;
}