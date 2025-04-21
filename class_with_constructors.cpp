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
    public:
        Student(string name, int age): Person(name, age) {}
};

class Professor:public Person{
    public:
        Professor(string name, int age): Person(name, age) {}
};

int main () {
    Student student1("John", 21);
    cout << "Student name: " << student1.getName() << endl;
    cout << "Student age: " << student1.getAge() << endl;

    Professor professor1("Jane", 38);
    cout << "Professor name: " << professor1.getName() << endl;
    cout << "Professor name: " << professor1.getName() << endl;

    return 0;
}