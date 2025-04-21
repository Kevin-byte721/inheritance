#include <iostream>
using namespace std;

// Create a class for employee that inherits from person
// Add a function to employee that is unique to employee
// Example working

class person{
    private: 
    string name;
    string activity;

    public:
    void displayname() {
        cout << "Name: ";
    }
    void setname(string n) {
        name = n;
        cout << name << endl;
    }
    void time_in() {
        cout << "Time In" << endl; 
    }
    void time_out() {
        cout << "Time Out" << endl;
    }
};

class employee : public person{
    
};

int main() {
    employee e1;
    e1.displayname();
    e1.setname("Kevin");
    e1.time_in();
    e1.time_out();
    return 0;
}