#include <iostream>
using namespace std;

class Person{
    private: 
        string name;
        int age;

    public:
        Person(string name, int age):name(name), age(age) {}

        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
};

class Student:public Person{
    private:
    string studentId;
    
    public:
        Student(string name, int age, string studentId): Person(name, age),studentId(studentId) {}
        string  getStudentId() {
            return studentId;
        }
};

class Worker:public Person{
    private: 
        string worktype;

    public:
        Worker(string name, int age, string worktype): Person(name, age), worktype(worktype) {}
        string getWorkType() {
            return worktype;
        }
        void display() {
            cout << getName() << " is a " << getWorkType() << endl;
        }
}; 

int main () {
    Student student1("John", 21, "2025739152");
    cout << "Student name: " << student1.getName() << endl;
    cout << "Student age: " << student1.getAge() << endl;
    cout << "Student Id: " << student1.getStudentId() << endl << endl; 

    Worker worker1("Jane", 38, "Information Security Analyst");
    cout << "Worker name: " << worker1.getName() << endl;
    cout << "Worker age: " << worker1.getAge() << endl;
    cout << "Work Type: " << worker1.getWorkType() << endl << endl;
    worker1.display();

    return 0;
}