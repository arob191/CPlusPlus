#include <iostream>
#include <fstream>
#include <thread>
#include <future>
#include <cstdint> 

void count_lines(std::promise<int>&& line_count_promise, std::ifstream& file);

int main() {
    std::ifstream file("data.txt");

    std::promise<int> line_count_promise;
    std::future<int> line_count_future = line_count_promise.get_future();

    std::thread my_thread(count_lines, std::move(line_count_promise), std::ref(file));
    my_thread.join();

    int num_lines = line_count_future.get();
    std::cout << "Number of lines: " << num_lines << std::endl;

    return 0;
}