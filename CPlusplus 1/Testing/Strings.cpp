#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter you name: ";
    std::getline(std::cin, name);


    if(name.empty()){
        std::cout << "You did not enter a name \n";
    }
    else if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters \n";
    }
    else{
        std::cout << "Welcome " << name << '\n';
    }

    // Append another string to the name variable
    name.append("@gmail.com");
    std::cout << "Your username is: " << name << '\n';

    // Display character at index 0
    std::cout << name.at(0) << "\n";
    
    // Insert character at index 0
    name.insert(0, "$");
    std::cout << name << '\n';

    // Find any specific character in a string
    std::cout << name.find(" ");

    // Erase characters
    name.erase(0, 3);

    // Clear the name variable:
    name.clear();

    return 0;
}