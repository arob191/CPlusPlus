// COSC 3306 C++
// Name: Austin Robertson
// Date: 11/16/2024
// Using Object oriented programming to create 3 classes: Person, Student, Employee

// #include <iostream>
// using std::string, std::endl;


// class Person
// {   
//     //Public variables and functions
//     public:
//         string name;
//         string address;
//         string phone;
//         string email;

//         // Our main constructor
//         Person()
//         {
//             name = " ";
//             address = " ";
//             phone = " ";
//             email = " ";

//         }

//         virtual string toString() const 
//         {
//             return "Person";
//         }


// };


#include <iostream>
#include <string>

using namespace std;

// Base Class Person
class Person {
protected:
    string name;
    string address;
    string phone;
    string email;

public:
    Person(string name, string address, string phone, string email)
        : name(name), address(address), phone(phone), email(email) {}

    virtual string toString() const {
        return "Person: " + name;
    }
};

// Derived Class Student
class Student : public Person {
    string status;

public:
    Student(string name, string address, string phone, string email, string status)
        : Person(name, address, phone, email), status(status) {}

    string toString() const override {
        return "Student: " + name + ", Status: " + status;
    }
};

// Derived Class Employee
class Employee : public Person {
    string office;
    double salary;

public:
    Employee(string name, string address, string phone, string email, string office, double salary)
        : Person(name, address, phone, email), office(office), salary(salary) {}

    string toString() const override {
        return "Employee: " + name + ", Office: " + office + ", Salary: " + to_string(salary);
    }
};

// Derived Class Faculty
class Faculty : public Employee {
    string rank;

public:
    Faculty(string name, string address, string phone, string email, string office, double salary, string rank)
        : Employee(name, address, phone, email, office, salary), rank(rank) {}

    string toString() const override {
        return "Faculty: " + name + ", Rank: " + rank;
    }
};

// Derived Class Staff
class Staff : public Employee {
    string title;

public:
    Staff(string name, string address, string phone, string email, string office, double salary, string title)
        : Employee(name, address, phone, email, office, salary), title(title) {}

    string toString() const override {
        return "Staff: " + name + ", Title: " + title;
    }
};

int main() {
    // Create instances of each class
    Student student1("John Doe", "123 Main St", "555-1234", "john@example.com", "Junior");
    Student student2("Jane Smith", "456 Maple Ave", "555-5678", "jane@example.com", "Senior");

    Faculty faculty1("Dr. Alan", "789 Elm St", "555-8765", "alan@example.com", "101", 80000, "Professor");
    Faculty faculty2("Dr. Grace", "321 Oak St", "555-4321", "grace@example.com", "102", 75000, "Assistant Professor");

    Staff staff1("Tom Brown", "654 Pine St", "555-6789", "tom@example.com", "103", 50000, "Technician");
    Staff staff2("Sara White", "987 Cedar St", "555-9876", "sara@example.com", "104", 52000, "Administrator");

    // Output the toString results
    cout << student1.toString() << endl;
    cout << student2.toString() << endl;

    cout << faculty1.toString() << endl;
    cout << faculty2.toString() << endl;

    cout << staff1.toString() << endl;
    cout << staff2.toString() << endl;

    return 0;
}
