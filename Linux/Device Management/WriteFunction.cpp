#include <iostream>
#include <string>

// Function for write operations
void write_function(const std::string& data) {
        std::cout << "Writing data: " << data << std::endl;
}

int main() {
        // Example of some data to write
        std::string write_data = "this_is_data";

        //Couter for while loop
        int write_attempts = 0;
        const int MAX_ATTEMPTS = 5;

        while (write_attempts < MAX_ATTEMPTS) {
                try{
                        write_function(write_data);
                        std::cout << "write successful" << std::endl;
                        break;
                } catch (const std::exception& e){
                        write_attempts++;
                        std::cout << "write attempted failed" << std::endl;
                }
        }

        if (write_attempts == MAX_ATTEMPTS) {
                std::cout << "Max attempts reached. Operation failed." << std::endl;
        }

        return 0;
}
