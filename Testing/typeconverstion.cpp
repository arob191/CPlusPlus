#include <iostream>

int main(){
    // type conversion = converting a data type from one to another
    // Implicit = automatic
    // Explicit = Preced value with new data type

    // Implicit
    char x = 100;

    // Explicit
    std::cout << (char) 100 << '\n';

    // Use case. Grading assignments:
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%\n";

    return 0;
}