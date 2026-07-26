#include<iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    Employee e1 = {"Sara", 1001, 75000};
cout << " Name:" << e1.name<< " ,ID :" << e1.id << " ," ;
    if(e1.salary > 50000)
        cout << " salary is good";
    else
        cout << "Salary is low";
        return 0;
}