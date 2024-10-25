#include <iostream>
#include <string>
#include <vector>
#include <ctime>

int main()
{
    // Arrays = a type of data structure that can hold mulptiple values via an index number

    // std::string cars[] = {"Corvette", "Mustang", "Camry"};

    // std::cout << cars[0] << '\n';
    // std::cout << cars[1] << '\n';
    // std::cout << cars[2] << '\n';

    // cars[0] = "Camaro";

    // std::cout << cars[0] << '\n';

    // return 0;

    srand(time(NULL));

    // std::vector<std::string> classes(5); // Initialize a vector with 5 elements
    // for (int i = 0; i < classes.size(); i++) {
    //     std::cout << "Please provide a class: ";
    //     std::getline(std::cin >> std::ws, classes[i]); // Use std::ws to ignore any spaces in the user answer
    // }
    // for (int i = 0; i < classes.size(); i++) {
    //     std::cout << classes[i] << "\n";
    // }

    std::vector<double> prices = {51.99, 16.75, 60, 99.99};

    int amount;

    std::cout << "how many values do you want to add to the prices array? " << std::endl;
    std::cin >> amount;

    for (int i = 0; i < amount; i++){
        double num = (rand() / 100) + 1;
        prices.push_back(num);
    }

    for (double prices : prices){
        std::cout << prices << std::endl;
    }

        return 0;
}