#include <iostream>
#include <vector>

// Use typedef to create a new identifier for a variable 
// typedef std::vector<std::pair<std::string, int>> pairlist_t; for typedef identifiers it is traditional to add _t at the end of the new identifier
typedef std::string text_t;
typedef int number_t;

// instead of using typedef we can also use the "using" keyword
using characters_t = std::string;
using numbers_t = int;


int main() {
    text_t firstname = "Austin";
    number_t age = 25;
    numbers_t year = 2024;
    characters_t state = "Texas";

    std::cout << state << '\n';
    std::cout << age << '\n';

    return 0;
}
