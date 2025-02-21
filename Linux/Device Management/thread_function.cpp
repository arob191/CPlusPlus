#include <iostream>
#include <fstream>
#include <future>

void count_lines(std::promise<int>&& line_count_promise, std::ifstream& file) {
    int num_lines = 0;
    std::string line;

    while (std::getline(file, line)) {
        num_lines++;
    }

    file.close();
    line_count_promise.set_value(num_lines);
}