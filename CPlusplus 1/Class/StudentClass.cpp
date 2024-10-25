// COSC 3306 C++
// Name: Austin Robertson
// Date: 10/18/2024
// Create a student class and manage a student object array

#include <iostream>

//Student Class
class Student 
{
    public:
        //Define our attributes
        std::string name;
        int id;
        double grade;

        //Constructor to construct a new student object
        Student()
        {
            name = " ";
            id = 0;
            grade = 0.00;
        }

        //Method to set the object details
        void setDetails(std::string name, int id, double grade)
        {
            // Set the attributes of the object
            this->name = name;
            this->id = id;
            this->grade = grade;
        }

        //Method to dsplay the object details
        void displayDetails()
        {
            // Display out object details
            std::cout << "Name: " << name << ", ID: " << id << ", Grade: " << grade << std::endl;
        }
};

//Grade average function
int gradeAverage(Student studentArray[], int size) 
{
    //Set our average variable
    double average = 0.00;

    //Add up total grades
    for (int i = 0; i < 5; ++i) {
        average += studentArray[i].grade;
    }
    
    //Calculate and return our average
    return average / 5;
}

//Main Code
int main()
{
    //Our object array
    Student studentArray[5];

    //Loop for our student array
    for(int i = 0; i < 5; ++i){
        //Define our variable to pass to our setDetails method
        std::string name;
        int id;
        double grade;

        std::cout << "Student " << i + 1 << " name: ";
        std::getline(std::cin >> std::ws, name); 
        std::cout << "ID: ";
        std::cin >> id;
        std::cout << "Grade: ";
        std::cin >> grade;
        std::cin.ignore(); // Clear the newline character from the buffer
    
        //Call our setDetails method
        studentArray[i].setDetails(name, id, grade);
    }

    //For loop to display the student info
    for (int i = 0; i < 5; ++i) {
        studentArray[i].displayDetails();
    }

    //Call our average grade function
    std::cout << "Average grade: " << gradeAverage(studentArray, 5);

    return 0;
}