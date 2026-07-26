#include<iostream>
using namespace std;

struct Car {
    string brand;
    string model;
    int price;
};

int main() {
    Car c1 = {"Toyota", "Corolla", 5000000};
    cout << "Brand: " << c1.brand << endl;
    cout << "Model: " << c1.model << endl;
    cout << "Price: " << c1.price;
}