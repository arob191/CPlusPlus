// COSC 3306 C++
// Name: Austin Robertson
// Date: 11/21/2024
// Using Object oriented programming to create 3 classes: Person, Student, Employee

#include <iostream>
#include <string>

using namespace std;

// Base Class Person
class Person 
{
protected:
    string name;
    string address;
    string phone;
    string email;

public:
    Person(string name, string address, string phone, string email)
        : name(name), address(address), phone(phone), email(email) {}

    // Our virtual method. Meant to me overriden by our subclasses
    virtual string toString() {
        return "Person: " + name;
    }
};

// Derived Class Student
class Student : public Person 
{
    string status;

public:
    Student(string name, string address, string phone, string email, string status)
        : Person(name, address, phone, email), status(status) {}

    //Our overide method for the Student class
    string toString() override {
        return "Student: " + name + ", Status: " + status;
    }
};

// Derived Class Employee
class Employee : public Person 
{
    string office;
    double salary;

public:
    Employee(string name, string address, string phone, string email, string office, double salary)
        : Person(name, address, phone, email), office(office), salary(salary) {}

    // Our overide method for the Employee class
    string toString()  override {
        return "Employee: " + name + ", Office: " + office + ", Salary: " + to_string(salary);
    }
};

// Derived Class Faculty
class Faculty : public Employee 
{
    string rank;

public:
    Faculty(string name, string address, string phone, string email, string office, double salary, string rank)
        : Employee(name, address, phone, email, office, salary), rank(rank) {}

    // Our overide method for the Faculty class
    string toString() override {
        return "Faculty: " + name + ", Rank: " + rank;
    }
};

// Derived Class Staff
class Staff : public Employee 
{
    string title;

public:
    Staff(string name, string address, string phone, string email, string office, double salary, string title)
        : Employee(name, address, phone, email, office, salary), title(title) {}

    // Our overide method for the Staff class
    string toString() override {
        return "Staff: " + name + ", Title: " + title;
    }
};

// Main code
int main() 
{

    // Creating an instance of each class
    Student student1("Austin Robertson", "1010 Royal Center", "555-1234", "arobertson23@lamar.edu", "Junior");
    Student student2("Lilly Argaiz", "1010 Royal Center", "555-5678", "Lilly@gmail.com", "Senior");
    Faculty faculty1("Dr. Mohsen", "111 Test St", "555-8765", "mohsen@lamar.edu", "101", 75000, "Professor");
    Faculty faculty2("Dr. Sujing", "123 Lamar St", "555-4321", "sujing@lamar.edu", "102", 75000, "Professor");
    Staff staff1("Robertson Austin", "456 Lamar St", "555-6789", "robertson@lamar.edu", "103", 50000, "Technician");
    Staff staff2("John Doe", "987 Lamar St", "555-9876", "john@lamar.edu", "104", 52000, "Administrator");

    // Output the toString results
    cout << student1.toString() << endl;
    cout << student2.toString() << endl;
    cout << faculty1.toString() << endl;
    cout << faculty2.toString() << endl;
    cout << staff1.toString() << endl;
    cout << staff2.toString() << endl;

    return 0;
}
